#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int r = atoi(argv[1]);
    int t = atoi(argv[2]);
    
    if(r == 1) {
        cout<<rnd.next(0,(int) 1e5)<<" "<<rnd.next(0,(int) 1e5)<<"\n";
    }
    if(r == 2) {
        cout<<rnd.next(0LL,(long long) 1e18)<<" "<<rnd.next(0LL,(long long) 1e18)<<"\n";
    }
    return 0;
}