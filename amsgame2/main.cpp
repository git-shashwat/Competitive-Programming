 //https://www.codechef.com/LRNDSA07/problems/AMSGAME2
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

int a[65], dp[65][10005] = {0}, g[65][100005];

int main(){
    test {
		int n;
		cin>>n;
		loop(1, n+1) {
			cin>>a[i];
		}
		const int MAX = *max_element(a, a+n+1);
		loop0(n+1) {
			for(int j = 0; j <= MAX; ++j) {
				dp[i][j] = 0;
				if (i and j)	g[i][j] = __gcd(a[i], j);
			}
		}
		dp[0][0] = 1;
		loop(1, n+1) {
			dp[i][a[i]]++;
			for (int j = 1; j <= MAX; j++) {
				dp[i][j] += dp[i-1][j];
				for(int k = j; k <= MAX; k+= j) {
					if(g[i][k] == j)
						dp[i][j] += dp[i-1][k];
				}
			}
		}
		cout<<dp[n][1]<<endl;
	}
    return 0;
}
