#include<bits/stdc++.h>
using namespace std;

long long n, q,res;
long long a[112345],sub[112345],dp[112345];
int L, R;


int main() {
    freopen("SUM14.INP","r",stdin);
    freopen("SUM14.OUT","w",stdout);

    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[0] = 0;
    for (int i = 1; i <= n; i++){
        dp[i] = max(dp[i-1],dp[i-1]+a[i]);
    }

    for (int i = 1; i <= q; i++) {
        cin >> L >> R;
        if (L != R){
            res = dp[R] - dp[L-1];
            cout << res<< endl;
        }
        else cout << 0 << endl;
    }



    return 0;
}
