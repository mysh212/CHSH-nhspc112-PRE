#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int r = atoi(argv[1]);
    int t = atoi(argv[2]);
    int b = atoi(argv[3]);
    int mmax = atoi(argv[4]);
    if(t == 1) r = rnd.next(1,r),b = rnd.next(1,b);
    vector<int>f(r);
    long long sig = 0;
    for(int &i : f) {
        sig += i = rnd.next(1,(int) mmax);
    }
    cout<<r<<" "<<b<<"\n";
    for(int i = 0;i<r;i++) {
        cout<<f.at(i)<<" \n"[i == r - 1];
    }
    for(int i = 1;i<=b;i++) {
        cout<<rnd.next(0LL,(sig * 1LL) << 1)<<"\n";
    }
    return 0;
}