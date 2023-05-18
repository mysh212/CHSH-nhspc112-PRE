#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
#define int long long
using namespace std;

signed main(){
    int n, q;
    cin >> n >> q;
    vector<ll> psum(n + 1);
    psum[0] = 0;
    for(int i = 1; i <= n; ++i){
        cin >> psum[i];
    }
    sort(psum.begin(), psum.end());
    for(int i = 1; i <= n; ++i) psum[i] += psum[i - 1];

    while(q--){
        int t;
        cin >> t;
        cout << upper_bound(psum.begin(), psum.end(), t) - psum.begin() - 1 << endl;
    }
}