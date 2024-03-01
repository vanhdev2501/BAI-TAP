#include <bits/stdc++.h>
using namespace std;
long long n,a[112345],b[112345];
int main() {
    freopen("SEQGAME.INP","r",stdin);
    freopen("SEQGAME.OUT","w",stdout);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    sort(a+1,a+n+1);
    sort(b+1,b+n+1);


    cout << a[1] + b[1];
}
