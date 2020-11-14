//https://codeforces.com/contest/1407/problem/0
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(n) for(int i=0;i<n;++i)
#define rloop0(n) for(int i=n;i>=0;--i)
#define rloop(a,b) for(int i=b; i>=a; --i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
		int n, sum = 0;
		cin>>n;
		int a[n];
		loop0(n) {
			cin>>a[i];
			if(i&1)	sum -= a[i];
			else sum += a[i];
		}
		cout<<n-abs(sum)<<endl;
		int i = 0;
		while(sum != 0) {
			if (a[i]) {
				if (sum > 0 && !(i&1)) {
					a[i] = -1;
					sum--;
				} else {
					a[i] = -1;
					sum++;
				}
			}
			i++;
		}
		loop0(n) {
			if(a[i] != -1) {
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
    return 0;
}
