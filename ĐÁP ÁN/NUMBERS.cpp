#include<bits/stdc++.h>
using namespace std;

long long n,res,demchan,demle;
int i,j;
long long a[112345],chan[112345],le[112345];


int main(){
    freopen("NUMBERS.INP","r",stdin);
    freopen("NUMBERS.OUT","w",stdout);

    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];

    if (a[0] % 2 == 0){
        chan[0] += 1;
        le[0] = 0;
    }
    else {
        le[0] += 1;
        chan[0] = 0;
    }
    for (i = 1; i <= n; i++)
        if (a[i] % 2 == 0) {
            chan[i] = chan[i-1] + 1;
            le[i] = le[i-1];
        }
        else{
            le[i] = le[i-1] + 1;
            chan[i] = chan[i-1];
        }
    demchan = 0;
    demle = 0;
    for (i = n; i > 0; --i){
        if (a[i] % 2 == 0)
            demchan += 1;
        else demle += 1;

        if (demchan == chan[i] && demle == le[i]){
            cout << i;
            return 0;
        }

    cout << -1;
    return 0;


    }

    cout << -1;
    return 0;
}
