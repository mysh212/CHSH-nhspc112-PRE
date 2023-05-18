#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int S(string s) {
  int ret = 0;
  for (char c : s) {
    ret += (int) (c - '0');
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;

  cout << max(S(a), S(b)) << '\n';

  return 0;
}