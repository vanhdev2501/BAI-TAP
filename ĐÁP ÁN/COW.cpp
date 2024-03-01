#include<bits/stdc++.h>
using namespace std;

long long n,d,res;
long long a[112345], b[112345],mcd1[112345],mcd2[112345];;
long long i,r,l;

int main(){
    freopen("COW.INP","r",stdin);
//    freopen("COW.OUT","w",stdout);
    cin >> n >> d;
    map<int,int> dic;

    for (i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
        dic[a[i]] = b[i];
    }
    sort(a+1,a+n+1);
    mcd1[0] = 0;
    mcd2[0] = 0;
    for (i = 1; i <= n; i++) mcd1[i] = mcd1[i-1] + a[i];
    for (i = 1; i <= n; i++) mcd2[i] = mcd2[i-1] + dic[a[i]];
    for (i = 1; i <= n; i++) cout << a[i]<< ' ' << dic[a[i]] << endl;
//    for (i = 1; i <= n; i++) cout << mcd1[i]<< ' ' << mcd2[i] << endl;

    l = 0;
    r = 1;
    while (r < n){
        if (mcd1[r+1] - mcd1[r] - mcd1[l] <= d){
            res = max(res,mcd2[r+1] - mcd2[l]);
            r += 1;
        }
        else {
            l += 1;
        }
    }
    cout << res << endl;


}
