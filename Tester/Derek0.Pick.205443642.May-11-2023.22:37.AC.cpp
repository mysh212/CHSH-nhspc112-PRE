#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  vector<i64> pref(n + 1);
  for (int i = 0; i < n; i++) {
    pref[i + 1] = pref[i] + a[i];
  }

  while (m--) {
    i64 k;
    cin >> k;
    int x = upper_bound(pref.begin(), pref.end(), k) - pref.begin();
    cout << x - 1 << '\n';
  }

  return 0;
}