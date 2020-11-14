//https://www.codechef.com/JULY20B/problems/CHEFSTR1
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
		int s[n];
		ll ans = 0;
		loop0(n){
			cin>>s[i];
			if (i != 0) {
				ans += abs(s[i]-s[i-1])-1;
			}
		}
		cout<<ans<<"\n";
	}
    return 0;
}
