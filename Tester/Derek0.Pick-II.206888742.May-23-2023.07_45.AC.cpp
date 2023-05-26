#include <bits/stdc++.h>

using namespace std;

using lint = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  lint k;
  cin >> n >> m >> k;

  vector a(n + 1, vector<lint>(m + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
    }
  }

  auto get = [&](int x, int y, int l) {
    return a[x + l][y + l] - a[x][y + l] - a[x + l][y] + a[x][y];
  };

  int mx = 0;
  for (int i = 0; i + mx < n; i++) {
    for (int j = 0; j + mx < m; j++) {
      while (i + mx < n && j + mx < m && get(i, j, mx + 1) <= k) {
        mx += 1;
      }
    }
  }
  cout << mx << '\n';

  return 0;
}