#include<bits/stdc++.h>
using namespace std;
long long n,i,res,j,dem=0;
long long a[112345],md[112345];



int main() {
    freopen("TK401.INP","r",stdin);
    freopen("TK401.OUT","w",stdout);

    cin >> n;

    for (long long z = 1; i <= n; i++){
        cin >> a[z];
    }
    for (long long i = 1; i <= n; i++) md[i] = 0;
    i = 1;
    j = 1;

    while (i <= n){
        md[a[i]]++;
        while (md[a[i]] >  2){
            md[a[j]]--;
            j++;
        }
    i++;
    res += i-j+1;

    }
    cout << res;

    return 0;
}
