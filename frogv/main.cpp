//https://www.codechef.com/LRNDSA07/problems/FROGV
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
	int n, p;
	ll k, x;
	cin>>n>>k>>p;
	vector <pair<ll, int> > a(n);
	int dp[n], g_no = 0;
	loop0(n) {
		cin>>a[i].first;
		a[i].second = i+1;
	}
	sort(all(a));
	dp[a[0].second] = g_no;
	loop(1, n) {
		if (a[i].first - a[i-1].first <= k)	{
			dp[a[i].second] = dp[a[i-1].second];
		} else {
			dp[a[i].second] = ++g_no;
		}
	}
	loop0(p) {
		int l, r;
		cin>>l>>r;
		if(dp[l] == dp[r]) {
			cout<<"Yes\n";
		} else {
			cout<<"No\n";
		}
	}
    return 0;
}
