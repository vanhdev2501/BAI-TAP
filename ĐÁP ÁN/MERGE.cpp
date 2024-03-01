#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[112345],b[112345];

void sx(const int* a, int n, const int* b, int m, int* c) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    freopen("MERGE.INP","r",stdin);
    freopen("MERGE.OUT","w",stdout);
    cin >> n >> m;
    for (int i = 0;i < n; i++) cin >> a[i];
    for (int i = 0;i < m; i++) cin >> b[i];
    int c[n + m];

    sx(a, n, b, m, c);

    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
