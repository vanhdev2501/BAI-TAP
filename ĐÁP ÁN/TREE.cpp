#include<bits/stdc++.h>
#define MOD 123456789

using namespace std;

long long n,k,res;
long long a[112345];
int xl(long long n, long long k, long long trees[]) {
    long long dic[112345] = {0};
    long long dis = 0;
    long long res = 0;
    long long l = 0;

    for (long long r = 0; r < n; r++) {
        if (dic[trees[r]] == 0)
            dis++;
            dic[trees[r]]++;

        while (dis > k) {
            dic[trees[l]]--;
            if (dic[trees[l]] == 0)
                dis--;
            l++;
        }

        res = (res + r - l + 1) % MOD;
    }

    return res;
}

int main() {
    freopen("TREE.INP", "r", stdin);
    freopen("TREE.OUT", "w", stdout);


    cin >> n >> k;


    for (int i = 0; i < n; ++i)
        cin >> a[i];

    res = xl(n, k, a);

    cout << res;
    return 0;
}
