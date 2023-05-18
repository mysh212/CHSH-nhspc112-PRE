#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define int long long
using namespace std;

signed main(){
    int n, m, w;
    cin >> n >> m >> w;
    vector<vector<ll>> g(n + 1, vector<ll>(m + 1, 0));
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> g[i][j];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            g[i][j] += g[i][j - 1];
        }
    }
    for(int i = 1; i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            g[j][i] += g[j - 1][i];
        }
    }
    
    int ans = 0;
    for(int k = 1; k <= min(n, m); ++k){
        for(int i = k; i <= n; ++i){
            for(int j = k; j <= m; ++j){
                if(g[i][j] - g[i - k][j] - g[i][j - k] + g[i - k][j - k] <= w){
                    ans = max(ans, k);
                }
            }
        }
    }
    cout << ans;
}