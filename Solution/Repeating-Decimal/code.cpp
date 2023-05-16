#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    int p, q, len = 0;
    cin >> p >> q;
    vector<int> v(q, -1);
    p = p % q;
    while(v[p] == -1){
        v[p] = len;
        p *= 10;
        while(p < q){
            p *= 10;
            ++len;
        }
        len += (int)log10(p / q) + 1;
        p %= q;
    }
    cout << len - v[p] << endl;
}

signed main(){OuO
    int tt;
    cin >> tt;
    while(tt--) solve();
}
