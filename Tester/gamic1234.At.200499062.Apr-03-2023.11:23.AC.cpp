#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;
ll n, w;
unordered_map<ll, int> mp;
unordered_set<ll> cnt;

void dfs(int layer, ll accu, unordered_map<ll, int>::iterator it){
    if(accu > w) return;
    if(layer >= 1) cnt.insert(accu);
    if(layer == 3) return;

    for(; it != mp.end(); it++){
        if(it->second){
            it->second--;
            dfs(layer + 1, accu + it->first, it);
            it->second++;
        }
    }
}

signed main(){
    cin >> n >> w;

    for(int i = 0; i < n; ++i){
        ll t;
        cin >> t;
        mp[t]++;
    }

    dfs(0, 0, mp.begin());
    
    cout << cnt.size();
}