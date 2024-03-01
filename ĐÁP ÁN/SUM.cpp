#include <bits/stdc++.h>
using namespace std;
int a[112345];
int n, k;
int np(int x, int l) {
    int r = n - 1;
    while (r >= l) {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main() {
    freopen("SUM.INP","r",stdin);
    freopen("SUM.OUT","w",stdout);
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int x, dem = 0;
    for (int i = 0; i < n; ++i) {
        x = k - a[i];
        int vt = np(x, i + 1);
        if (vt != -1) {
            cout << i + 1 << " " << vt + 1 << endl;
            dem++;
            return 0;
        }
    }
    if (dem == 0)
        cout << -1 << endl;

    return 0;
}
