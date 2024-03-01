#include<bits/stdc++.h>
using namespace std;

long long n,q,x,y,fc1,fc2,fc3;
long long a[112345];
long long c1[112345],c2[112345],c3[112345];

int main() {
    freopen("SUM5.INP","r",stdin);
    freopen("SUM5.OUT","w",stdout);

    int N, Q;
    cin >> N >> Q;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int c1[N + 1] = {0};
    int c2[N + 1] = {0};
    int c3[N + 1] = {0};

    for (int i = 1; i <= N; ++i) {
        c1[i] = c1[i - 1];
        c2[i] = c2[i - 1];
        c3[i] = c3[i - 1];
        if (a[i - 1] == 1) {
            c1[i]++;
        } else if (a[i - 1] == 2) {
            c2[i]++;
        } else if (a[i - 1] == 3) {
            c3[i]++;
        }
    }

    for (int i = 0; i < Q; ++i) {

        cin >> x >> y;
        fc1 = c1[y] - c1[x - 1];
        fc2 = c2[y] - c2[x - 1];
        fc3 = c3[y] - c3[x - 1];
        cout << fc1 << " " << fc2 << " " << fc3 << endl;
    }

    return 0;
}
