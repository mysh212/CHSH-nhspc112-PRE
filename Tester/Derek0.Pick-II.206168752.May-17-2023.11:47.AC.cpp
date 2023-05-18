#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  i64 k;
  cin >> n >> m >> k;

  vector a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  vector p(n + 1, vector<i64>(m + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + a[i - 1][j - 1];
    }
  }

  for (int l = min(n, m); l > 0; l--) {
    for (int x = l; x <= n; x++) {
      for (int y = l; y <= m; y++) {
        i64 sum = p[x][y] - p[x - l][y] - p[x][y - l] + p[x - l][y - l];
        if (sum <= k) {
          cout << l << '\n';
          return 0;
        }
      }
    }
  }
  cout << 0 << '\n';

  return 0;
}