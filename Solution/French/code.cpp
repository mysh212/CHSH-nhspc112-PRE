#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

const string A[] = {" ", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf", "dix"};
const string B[] = {" ", "onze", "douze", "treize", "quatorze", "quinze", "seize"};
const string C[] = {" ", " ", "vingt", "trente", "quarante", "cinquante", "soixante"};

string Get(int n) {
  if (n == 10) {
    return "dix";
  }
  if (11 <= n && n <= 16) {
    return B[n - 10];
  }

  if (17 <= n && n <= 19) {
    return "dix-" + A[n - 10];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  if (1 <= n && n <= 10) {
    cout << A[n];
    return 0;
  }

  if (11 <= n && n <= 19) {
    cout << Get(n);
    return 0;
  }

  if (n % 10 == 0 && (20 <= n && n <= 60)) {
    cout << C[n / 10];
    return 0;
  }

  if (20 <= n && n <= 69) {
    if (n % 10 == 1) {
      cout << C[n / 10] << "-et-" << A[1];
    } else {
      cout << C[n / 10] << '-' << A[n % 10];
    }
    return 0;
  }

  if (70 <= n && n <= 79) {
    if (n == 71) {
      cout << "soixante-et-onze";
    } else {
      if (n == 79) {
        cout << "soixante-dix-neuf";
      } else {
        cout << C[6] << '-' << Get(n - 60);
      }
    }
    return 0;
  }

  if (n == 80) {
    cout << "quatre-vingts";
    return 0;
  }

  if (81 <= n && n <= 99) {
    n -= 80;
    cout << "quatre-vingt-";
    if (1 <= n && n <= 10) {
      cout << A[n] << '\n';
    } else {
      cout << Get(n) << '\n';
    }
    return 0;

  }

  return 0;
}
