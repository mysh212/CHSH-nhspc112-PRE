#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; i64 w;
  cin >> n >> w;

  vector<i64> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  set<i64> s;
  for (int i = 0; i < n; i++) {
    if (a[i] <= w) 
      s.insert(a[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] <= w)
        s.insert(a[i] + a[j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (a[i] + a[j] + a[k] <= w)
          s.insert(a[i] + a[j] + a[k]);
      }
    }
  }

  cout << s.size() << '\n';

  return 0;
}