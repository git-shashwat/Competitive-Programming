
//https://www.codechef.com/LRNDSA05/problems/CHEFSQRS
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
		ll n;
		int flag = 0;
		ll ans = -1;
		cin>>n;
		loop(1, sqrt(n) + 1) {
			if ((n%i == 0) && (n/i != i)) {
				ll a = ((n/i) + i)/2;
				ll b = ((n/i) - i)/2;
				if ((pow(b, 2) + n) == pow(a, 2)) {
					if (ans == -1) {
						ans = b;
					} else {
						ans = min(ans, b);
					}
					flag = 1;
				}
			} 
		}
		if (flag) {
			ans = pow(ans, 2);
		}
		cout<<ans<<endl;
	}
    return 0;
}
