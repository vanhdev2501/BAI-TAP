#include<bits/stdc++.h>
using namespace std;

long long n,dem,k,q,t;
long long a[112345],m[112345],mcd[112345];
long long i;
long long r,l;
long long tong=0, res=0;
long long d1[112345], d2[112345], d3[112345];

//tknp
// int tk(long long x){
// 	long long l = 1;
// 	long long r = n+1;
// 	while (r >= l){
// 		long long mid = (r + l)/2;
// 		if (mcd[mid] == x) return mid;
// 		else if (mcd[mid] < x) l = mid + 1;
// 		else r = mid - 1;
// 	}
// 	return -1;
// }

// sum 4
// int main(){
// 	cin >> n;
// 	for (i = 1; i <= n; i++) cin >> a[i];
// 	cin >> t;
// 	mcd[0] = 0;
// 	for (i = 1; i <= n; i++) mcd[i] = mcd[i-1] + a[i];
// 	for (i = 1; i <= n; i++){
// 		if (mcd[i] == t){
// 			r = i;
// 			res = max(res,r);
// 		}
// 		else{
// 			r = tk(mcd[i] + t);
// 		if (r > -1){
// 			res = max(res, r - i);
// 		}
// 		}
// 	}
// 	cout << res;
// 	return 0;
// }

// sum 5
// int main(){
// 	freopen("main.inp","r",stdin);
// 	cin >> n >> q;
// 	for (i = 1; i <= n; i++) cin >> a[i];
// 	d1[0] = 0;
// 	d2[0] = 0;
// 	d3[0] = 0;
// 	for (i = 1; i <= n; i++){
// 		if (a[i] == 1){
// 			d1[i] = d1[i-1] + 1;
// 		}
// 		else d1[i] = d1[i-1];
// 		if (a[i] == 2){
// 			d2[i] = d2[i-1] + 1;
// 		}
// 		else d2[i] = d2[i-1];
// 		if (a[i] == 3){
// 			d3[i] = d3[i-1] + 1;
// 		}
// 		else d3[i] = d3[i-1];
// 	}
// 		for (i = 1; i <= n; i++){
// 		cout << d1[i] << ' ' << d2[i] << " " << d3[i] << endl;
// 	}
// 	for (i = 1; i <= q; i++){
// 		cin >> l >> r;
// 		cout << d1[r] - d1[l-1] << " " << d2[r] - d2[l-1] << " " << d3[r] - d3[l-1] << endl;
// 	}
// }

//sum 6
// int main(){
// 	freopen("main.inp","r",stdin);
// 	cin >> n;
// 	map<int,int> dic;
// 	dic[0] = -1;
// 	for (i = 1; i <= n; i++) cin >> a[i];
// 	for (i = 1; i <= n; i++){
// 		if (a[i] < 0) dem += 1;
// 		else dem -= 1;
// 		if (dic.count(dem) != 0){
// 			res = max(res,i - dic[dem]-1);
// 		}
// 		else dic[dem] = 1;
// 	}
// 	cout << res;
// }

//sum 14
// int main(){
// 	freopen("main.inp","r",stdin);
// 	cin >> n >> k;
// 	for (i = 1; i <= n; i++) cin >> a[i];
// 	mcd[0] = 0;
// 	for (i = 1; i <= n; i++){
// 		if (a[i] >= 0)
// 			mcd[i] = mcd[i-1] + a[i];
// 		else mcd[i] = mcd[i-1];
// 	}
// 	for (i = 1; i <= k; i++){
// 		cin >> l >> r;
// 		if (l == r){
// 			cout << 0 << endl;
// 		}
// 		else{
// 			res = mcd[r] - mcd[l-1];
// 			cout << res << endl;
// 		}
// }
// }

// tk401
// int main(){
// 	freopen("main.inp","r",stdin);
// 	cin >> n;
// 	for (i = 1; i <= n; i++) cin >> a[i];
// 	r = 1;
// 	l = 1;
// 	while (r <= n){
// 		m[a[r]]++;
// 		while (m[a[r]] > 2){
// 			m[a[l]]--;
// 			l++;
// 		}	
// 		res += r - l + 1;
// 		r++;
// 	}
// 	cout << res;
// }

//MSUM13
int main(){
	freopen("main.inp","r",stdin);
	// freopen("main.out","w",stdout);
	map<long long, long long> dic;
	cin >> n >> k;
	for (i = 1; i <= n; i++) cin >> a[i];
	dic[0] = 1;
	for (i = 1; i <= n; i++){
		mcd[i] = mcd[i-1] + a[i];
	}
	for (i = 1; i <= n; i++){
		if (dic.find(mcd[i] - k) != dic.end())
			dem += dic[mcd[i] - k];
			dic[mcd[i]]++;
	}
cout << dem;
}
