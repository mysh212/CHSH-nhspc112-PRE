// Author : ysh
// 04/04/2023 Tue  8:38:13.85
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    vector<int>f(a);
    for(int &i : f) {
        cin>>i;
    }
    multiset<int>left,right;
    for(int i = 0;i<a - 2;i++) {
        left.insert(f.at(i));
    }
    right.insert(f.at(a - 1));
    vector<int>ans;
    for(int i = a - 2;i>=1;i--) {
        if(f.at(i) <= b) ans.push_back(f.at(i));
        for(int j : left) {
            if(j + f.at(i) <= b) ans.push_back(j + f.at(i));
            auto found = right.upper_bound(b - j - f.at(i));
            for(auto k = right.begin();k != right.end() && k != found;k = next(k)) {
                ans.push_back(j + f.at(i) + *k);
            }
        }
        for(int j : right) {
            if(j + f.at(i) <= b) ans.push_back(f.at(i) + j); 
        }
        left.erase(left.lower_bound(f.at(i - 1)));
        right.insert(f.at(i));
    }
    if(f.at(a - 1) <= b) ans.push_back(f.at(a - 1));
    if(f.at(0) <= b) ans.push_back(f.at(0));
    if(f.at(0) + f.at(a - 1) <= b) ans.push_back(f.at(0) + f.at(a - 1));
    sort(ans.begin(),ans.end());
    ans.resize(unique(ans.begin(),ans.end()) - ans.begin());
    cout<<ans.size();
}