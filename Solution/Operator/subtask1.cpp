#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a,b;cin>>a>>b;
    bool ans = 0;
    while(a--) ans = ans xor 1;
    while(b--) ans = ans xor 0;
    cout<<(ans ? "True" : "False");
    return 0;
}