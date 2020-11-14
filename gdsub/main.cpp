//https://www.codechef.com/LRNDSA07/problems/GDSUB
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
	ll n, k;
	cin>>n>>k;
	vector <ll> a(n), d(n);
	int freq[8005];
	for(int i = 0; i <= 8000; ++i)	freq[i] = 0;
	loop0(n) {
		cin>>a[i];
		freq[a[i]]++;
		if(freq[a[i]] == 1)	d.pb(a[i]);
	}
	// now d contains only distinct elements
	// we need to work our solution for only distinct elements so basically d
	k = min(k, (ll) d.size());
	n = d.size();
	int dp[n][k+1];
	for (int i = 0; i <= k; ++i)	dp[0][i] = 0;
	dp[0][0] = 1;
	dp[0][1] = freq[d[0]];
	for(int i = 1; i < n; ++i) {
		dp[i][0] = 1;
		for (int j = 1; j <= k; ++j) {
			dp[i][j] = (dp[i-1][j] % MOD) + ((dp[i-1][j-1]*freq[d[i]]) % MOD);
			dp[i][j] %= MOD;
		}
	}
	ll ans = 0;
	loop0(k+1) {
		ans += dp[n-1][i];
		ans %= MOD;
	}
	cout<<ans<<"\n";
   	return 0;
}
