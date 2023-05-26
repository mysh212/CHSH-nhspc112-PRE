#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;
const int maxn = 2505;
ll mat[maxn][maxn];

signed main(){OuO
    int n, m;
    ll k;
    cin >> n >> m >> k;
    memset(mat, 0, sizeof(mat));
    for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j) cin >> mat[i][j];
    for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j) mat[i][j] += mat[i][j - 1];
    for(int j = 1; j <= m; ++j) for(int i = 1; i <= n; ++i) mat[i][j] += mat[i - 1][j];

    auto valid = [&](int i, int j, int sz){
        if(i + sz - 1 > n || j + sz - 1 > m) return false;
        if(mat[i + sz - 1][j + sz - 1] - mat[i - 1][j + sz - 1] - mat[i + sz - 1][j - 1] + mat[i - 1][j - 1] <= k) return true;
        return false;
    };

    int s = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            while(valid(i, j, s + 1)) ++s;
        }
    }

    cout << s;
}