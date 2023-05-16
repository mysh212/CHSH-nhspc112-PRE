#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int> ans = {0,0,0,1,0,0,1,6,0,1,0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b, c;
        cin >> b >> c;
        cout << ans[c] << endl;
    }
    return 0;
}
