#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string a,b;assert(cin>>a>>b);
    assert(a.size() <= 101 && b.size() <= 101);
    for(char &i : a) assert(isdigit(i));
    for(char &i : b) assert(isdigit(i));
    assert(getchar() == EOF);
    return 0;
}