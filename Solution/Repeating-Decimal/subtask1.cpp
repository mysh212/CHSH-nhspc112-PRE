#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;
 
void solve(){
    int p, q, len = 0;
    cin >> p >> q;
    set<int> se;
    p = p % q;
    while(!se.count(p)){
        se.insert(p);
        p *= 10;
        while(p < q){
            p *= 10;
            ++len;
        }
        len += (int)log10(p / q) + 1;
        p %= q;
    }
    cout << len << endl;
}
 
signed main(){OuO
    int tt;
    cin >> tt;
    while(tt--) solve();
}
