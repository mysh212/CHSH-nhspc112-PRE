
#include<bits/stdc++.h>
#define endl '\n'
#define OuO ios::sync_with_stdio(0);cin.tie(0);
#define ll long long
using namespace std;
string f[100] = {"", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf", "dix"};

signed main(){
    f[11] = "onze";
    f[12] = "douze";
    f[13] = "treize";
    f[14] = "quatorze";
    f[15] = "quinze";
    f[16] = "seize";
    f[17] = "dix-sept";
    f[18] = "dix-huit";
    f[19] = "dix-neuf";
    f[20] = "vingt";
    f[30] = "trente";
    f[40] = "quarante";
    f[50] = "cinquante";
    f[60] = "soixante";
    for(int i = 2; i <= 6; ++i){
        for(int j = 1; j < 10; ++j){
            if(j == 1){
                f[i * 10 + j] = f[i * 10] + "-et-" + f[j];
            }else{
                f[i * 10 + j] = f[i * 10] + '-' + f[j];
            }
        }
    }
    f[70] = "soixante-dix";
    f[71] = "soixante-et-onze";
    for(int i = 2; i <= 9; ++i){
        f[70 + i] = f[60] + '-' + f[10 + i];
    }
    f[80] = "quatre-vingts";
    for(int i = 1; i <= 19; ++i){
        f[80 + i] = f[4] + '-' + f[20] + '-' + f[i];
    }

    int n;
    cin >> n;
    cout << f[n];
}