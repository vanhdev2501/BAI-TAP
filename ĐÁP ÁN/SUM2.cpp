#include<bits/stdc++.h>
using namespace std;
long long n,k,kq;
long long a[112345],mcd[112345],t1,t2;
int main(){
    freopen("SUM2.INP","r",stdin);
    freopen("SUM2.OUT","w",stdout);
    cin >> n >> k;
    a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++){
        mcd[i] = mcd[i-1] + a[i];
    }

    for (int i = k; i <= n; i++){
        t1 = mcd[i] - mcd[i-k];
        if (t1 > kq) kq = t1;
    }
    cout << kq;


}
