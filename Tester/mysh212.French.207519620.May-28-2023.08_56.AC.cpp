#include<bits/stdc++.h>
using namespace std;
const string some[] = {"un","deux","trois","quatre","cinq","six","sept","huit","neuf","dix","onze","douze","treize","quatorze","quinze","seize","dix-sept"," dix-huit"," dix-neuf"};
const string t[] = {"dix","vingt","trente","quarante","cinquante","soixante"};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    if(n <= 19) return cout<<some[n - 1],0;
    if(n % 10 == 0) return cout<<t[(n / 10) - 1],0;
    if(n % 10 == 1) return cout<<t[(n / 10) - 1]<<"-et-"<<some[0],0;
    return cout<<t[(n / 10) - 1]<<"-"<<some[(n % 10) - 1],0;
}
