#include<bits/stdc++.h>
using namespace std;
long long n,a[112345],x,q=-1,t,j=1,i=1,s=0,res,k;
int mcd[112345],tmp,_max;

int np(int x, int a[], int l, int r){
    if (r>=l){
        int mid = l+ (r-l)/2;
        if (a[mid] == x) return mid+1;
        else if (a[mid]>x) return np( x,a, l, mid - 1);
        else return np( x, a, mid + 1, r);
        }

    return -1;
}

int main(){
    freopen("SUM4.INP","r",stdin);
    freopen("SUM4.OUT","w",stdout);

    cin >> n;
    for (int i = 1;i <= n; i++) cin >> a[i];

    cin >> k;
//    for (int i = 1; i <= n; i++){
//        mcd[i] = mcd[i-1] + a[i];
//    }
//
//    for (int i = 0;i <= n; i++){
//        x = abs(t - mcd[i]);
//        tmp = np(x,mcd,0,n);
//        if (tmp != -1){
//        if (abs(i-tmp+1) > q) q = abs(i-tmp+1),_max = tmp;
//    }
//    }
//    if (q==-1) cout <<(-1);
//    else cout << q << endl;

s = a[1];
while (j<=n){
    if (s==k){
        res = max(res,j-i+1);
        s= s-a[i];
        i++;
        j++;
        s = s + a[j];
    }
    else
    if (s<k){
        j++;
        s = s + a[j];
    }
    else
    if (s>k){
    s = s -a[i];
    i++;

    }
}
if (res >=1) cout << res;
else cout << -1;
}
