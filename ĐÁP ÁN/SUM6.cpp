#include<bits/stdc++.h>
using namespace std;

long long N,ans=0;
int a[112345];

int xl(int nums[], int N) {
    unordered_map<int, int> dic;
    int dem = 0;
    int res = 0;

    dic[0] = -1;
    for (int i = 0; i < N; ++i) {
        if (nums[i] > 0) {
            dem += 1;
        } else if (nums[i] < 0) {
            dem -= 1;
        }

        if (dem == 0) {
            res = max(res, i + 1);
        } else if (dic.find(dem) != dic.end()) {
            res = max(res, i - dic[dem]);
        } else {
            dic[dem] = i;
        }
    }

    return res;
}

int main() {
    freopen("SUM6.INP","r",stdin);
    freopen("SUM6.OUT","w",stdout);
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int ans = xl(a, N);

    cout << ans << endl;

    return 0;
}
