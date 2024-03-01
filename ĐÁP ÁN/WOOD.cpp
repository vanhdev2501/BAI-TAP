#include<bits/stdc++.h>
using namespace std;

long long n,s;
long long a[1123456];


int xl(long long n, long long S, long long woods[]) {
    long long res = n + 1;
    long long l = 0;
    long long t = 0;

    for (int i = 0; i < n; ++i) {
        t += woods[i];
        while (t >= S) {
            res = min(res, i - l + 1);
            t -= woods[l];
            l++;

    }
    }
    if (res != n + 1){
        return res;
    }
    else return 0;
}

int main() {
    freopen("WOOD.INP", "r", stdin);
    freopen("WOOD.OUT", "w", stdout);

    cin >> n >> s;
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long res = xl(n, s, a);

    cout << res;

    return 0;
}
