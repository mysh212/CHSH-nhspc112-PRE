// Author : ysh
// 05/26/2023 Fri 18:25:08.13
#include<bits/stdc++.h>
using namespace std;
#define sig(i,j,k) f.at(i).at(j) - f.at(i - k).at(j) - f.at(i).at(j - k) + f.at(i - k).at(j - k)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;cin>>a>>b;
    long long c;cin>>c;
    vector<vector<long long>>f(a + 1,vector<long long>(b + 1));
    for(int i = 1;i<=a;i++) {
        for(int j = 1;j<=b;j++) {
            cin>>f.at(i).at(j);
        }
    }

    for(int i = 1;i<=a;i++) {
        for(int j = 1;j<=b;j++) {
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + f[i][j];
        }
    }

    int ans = 0;
    for(int i = 1;i<=a;i++) {
        int x = i;
        int y = 1;
        int now = 1;
        if(a - i + 1 <= ans) break;

        while(x <= a && y <= b) {
            if(sig(x,y,now) <= c) ans = max(ans,now),x = x + 1,y = y + 1,now++;
            else now--;
        }
    }

    for(int j = 2;j<=b;j++) {
        int x = 1;
        int y = j;
        int now = 1;
        if(b - j + 1 <= ans) break;

        while(x <= a && y <= b) {
            if(sig(x,y,now) <= c) ans = max(ans,now),x = x + 1,y = y + 1,now++;
            else now--;
        }
    }
    cout<<ans;
    return 0;
}