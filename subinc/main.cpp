//https://www.codechef.com/LRNDSA07/problems/SUBINC
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
		int n;
		cin>>n;
		ll a[n], memo[n], ans = 0;
		memo[0] = 1;
		loop0(n) {
			cin>>a[i];
		}
		loop(1, n+1) {
			if (a[i-1] <= a[i]) {
				memo[i] = memo[i-1] + 1;
			} else {
				memo[i] = 1;
			}
		}
		cout<<accumulate(memo, memo + n, ans)<<"\n";
	}
    return 0;
}

