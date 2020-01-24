//https://www.codechef.com/problems/ALTARAY
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
		int n;
		cin>>n;
		ll a[n], memo[n];
		loop0(n) {
			cin>>a[i];
		}
		memo[0] = 1;
		for (int i = n-2; i > -1; --i) {
			if (a[i] * a[i+1] > 0) {
				memo[n-i-1] = 1;
			} else {
				memo[n-i-1] = memo[n-i-2] + 1;
			}
		}
		for(int i = n-1; i > -1; --i) {
			cout<<memo[i]<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
