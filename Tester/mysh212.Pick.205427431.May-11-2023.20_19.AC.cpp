#include<bits/stdc++.h>
using namespace std;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int a,b;cin>>a>>b;
    vector<long long>f(a);
    for(long long &i : f) {
        cin>>i;
    }
    sort(f.begin(),f.end());
    long long last = 0;
    for(long long &i : f) {
        i = last += i;
    }
    long long tmp;
    while(b--) {
        cin>>tmp;
        auto found = upper_bound(f.begin(),f.end(),tmp);
        cout<<(int) (found - f.begin())<<"\n";
    }
    return 0;
}