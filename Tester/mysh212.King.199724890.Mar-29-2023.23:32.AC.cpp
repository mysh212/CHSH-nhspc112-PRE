#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    char c;
    int a,b;a = b = 0;
    while(c = getchar(),c != EOF) {
        if(isdigit(c)) {
            a = a + (c & 15);
            continue;
        }
        swap(a,b);
    }
    cout<<max(a,b);
    return 0;
}