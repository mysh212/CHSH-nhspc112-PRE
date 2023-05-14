#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;

void solve(){
    int p, q;
    cin >> p >> q;
    set<int> se;
    p = p % q;
    string s;
    while(!se.count(p)){
        se.insert(p);
        p *= 10;
        while(p < q){
            p *= 10;
            s += '0';
        }
        s += to_string(p / q);
        p %= q;
    }
    cout << s.size() << endl;
}

signed main(){
    int tt;
    cin >> tt;
    while(tt--) solve();
}