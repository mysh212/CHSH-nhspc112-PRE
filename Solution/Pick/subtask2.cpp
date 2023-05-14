#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    vector<int>f(a);
    for(int &i : f) {
        cin>>i;
    }
    sort(f.begin(),f.end());
    while(b--) {
        long long b;cin>>b;
        int t = 0;
        long long sig = 0;
        for(int &i : f) {
            sig = sig + i;
            if(sig > b) {
                break;
            }
            t++;
        }
        cout<<t<<"\n";
    }
    return 0;
}