//https://www.codechef.com/APRIL20B/problems/CARSELL
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
		ll p[n];
		ull profit = 0;
		loop0(n) {
			cin>>p[i];
		}
		sort(p, p+n, greater<ll>());
		loop0(n) {
			ll priceafterdeprecation = p[i]-i;
			if (priceafterdeprecation > 0) {
				profit = (profit + priceafterdeprecation)%MOD;
			}
		}
		cout<<profit<<"\n";
	}
    return 0;
}
