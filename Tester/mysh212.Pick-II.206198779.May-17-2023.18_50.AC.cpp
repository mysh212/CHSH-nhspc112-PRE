// Author : ysh
// 05/16/2023 Tue 19:36:35.22
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>f;
vector<vector<long long>>g;
int a,b;
#define sig(i,j,k,l) (g.at(k).at(l) - g.at(i - 1).at(l) - g.at(k).at(j - 1) + g.at(i - 1).at(j - 1))
bool check(int x,long long now) {
    for(int i = x;i<=a;i++) {
        for(int j = x;j<=b;j++) {
            if(sig(i - x + 1,j - x + 1,i,j) <= now) return 1;
        }
    }
    return 0;
}
int ck(int l,int r,long long x) {
    if(l + 1 == r) return l;
    int mid = (l + r) >> 1;
    if(check(mid,x)) return ck(mid,r,x);
    return ck(l,mid,x);
}
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    long long c;cin>>a>>b>>c;
    f = vector<vector<int>>(a,vector<int>(b));
    for(auto &i : f) {
        for(int &j : i) {
            cin>>j;
        }
    }
    g = vector<vector<long long>>(a + 1,vector<long long>(b + 1));
    for(int i = 1;i<=a;i++) {
        for(int j = 1;j<=b;j++) {
            g.at(i).at(j) = g.at(i).at(j - 1) + g.at(i - 1).at(j) - g.at(i - 1).at(j - 1) + f.at(i - 1).at(j - 1);
        }
    }
    cout<<ck(0,min(a,b) + 1,c)<<"\n";
    return 0;
}