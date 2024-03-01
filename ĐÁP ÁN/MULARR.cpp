#include<bits/stdc++.h>
using namespace std;

long long n,res=0;
long long a[112345],mcd[112345];
long long i;


int main(){
    freopen("MULARR.INP","r",stdin);
    freopen("MULARR.OUT","w",stdout);
    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];
    if (n==1){
        cout << a[1];
        return 0;
    }
    mcd[0] = 0;
    a[0] = 0;
    for (i = 1; i <= n; i++) mcd[i] = mcd[i-1] + a[i];

    for (i = 1; i <= n; i++){
        res += a[i]*(mcd[n]-mcd[i]);
    }
    cout << res;


}
