//https://www.codechef.com/LRNDSA07/problems/CDQU5
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000009
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back

using namespace std;

const int N = 1e6;

ll dp[N];

ll billiard (ll x) {
	if (dp[x] != -1)	return dp[x];
	return  dp[x] = (billiard(x-2) + billiard(x-3)) % MOD;
}

int main(){
    memset(dp, -1, sizeof(dp));
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
    test {
		ll x;
		cin>>x;
		cout<<billiard(x)<<"\n";
	}
    return 0;
}
