#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    vector<int>f(a);
    vector<int>mark(2001);
    for(int &i : f) {
        cin>>i;
        mark.at(i)++;
    }
    while(b--) {
        long long b;cin>>b;
        int t = 0;
        long long sig = 0;
        for(int i = 1;i<=2000;i++) {
            if(sig + (i * mark.at(i)) > b) {
                t = t + ((b - sig) / i);
                break;
            }
            t = t + mark.at(i);
            sig = sig + (i * mark.at(i));
        }
        cout<<t<<"\n";
    }
    return 0;
}