#include<bits/stdc++.h>
using namespace std;

long long n,res,dem,ans=0,x,y;
long long a[112345];
long long i;

int main(){
    freopen("SUM10.INP","r",stdin);
    freopen("SUM10.OUT","w",stdout);

    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];

    for (i = 1; i <= n; i++){
        if (a[i] == 1) x += 1;
        else y += 1;


    cout << res;

}
