#include<bits/stdc++.h>
using namespace std;

long long n,m;
long long a[112345],md[112345];
long long i;

int main() {
    freopen("DENMAU.INP","r",stdin);
    freopen("DENMAU.OUT","w",stdout);

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> dic;
    long long kc = 0;
    long long l = 0;
    long long res = n;

    for (long long r = 0; r < n; r++) {
        if (dic[a[r]] == 0) {
            kc++;
        }
        dic[a[r]]++;

        while (kc == m) {
            res = min(res, r - l + 1);
            dic[a[l]]--;
            if (dic[a[l]] == 0) {
                kc--;
            }
            l++;
        }
    }

    cout << res << endl;

    return 0;
}
