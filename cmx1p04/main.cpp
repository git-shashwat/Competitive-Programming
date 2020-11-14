//https://www.codechef.com/COMX2020/problems/CMX1P04
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
	int n;
	cin>>n;
	ll h[n+1];
	map <int, ll> mp;
	ll prefix [n+1];
	prefix[0] = 0;
	h[0] = -1;
	loop(1, n+1) {
		cin>>h[i];
		prefix[i] = prefix[i-1] + h[i];
	}
	int q;
	cin>>q;
	loop0(q) {
		string time;
		ll w;
		int pos, l, r;
		cin>>time;
		if (time == "past") {
			cin>>w>>pos;
			h[pos] += w;
			loop(pos, n+1) {
				prefix[i] += w;
			}
		} else {
			cin>>l>>r;
			ll ans = prefix[r] - prefix[l-1];
			cout<<ans<<"\n";
		}
	}
    return 0;
}
