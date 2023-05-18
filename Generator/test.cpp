#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int t = atoi(argv[3]);
    if(t == 1) n = rnd.next(1,n),m = rnd.next(1,m);
    vector<vector<int>>f(n,vector<int>(m));
    long long sig = 0;
    for(auto &i : f) {
        for(int &j : i) {
            j = rnd.next(0,(int) 1e6);
            sig = sig + j;
        }
    }
    cout<<n<<" "<<m<<" ";
    for(int i = 1;i<=1;i++) {
        long long k = rnd.next(0LL,sig);
        if(t == 2) k = sig + rnd.next(0LL,1000LL);
        if(t == 3) k = rnd.next(0LL,100LL);
        if(t == 4) k = (sig >> 1) + rnd.next(0LL,1000LL);
        cout<<k<<"\n";
    }
    for(auto &i : f) {
        for(int j = 0;j<m;j++) {
            cout<<i.at(j)<<" \n"[j == m - 1];
        }
    }
    return 0;
}