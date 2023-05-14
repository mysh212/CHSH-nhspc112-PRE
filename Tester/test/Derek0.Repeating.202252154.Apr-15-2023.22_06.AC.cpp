#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

constexpr int N = (int) 1e6;

void solve() {
  int p, q;
  cin >> p >> q;
  p %= q;

  int cnt[N] {};
  int iter = 0;
  while (true) {
    cnt[p] = iter++;
    p = p * 10 % q;

    if (cnt[p] > 0) {
      cout << iter - cnt[p] << '\n';
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}