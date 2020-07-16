//https://www.codechef.com/JULY20B/problems/PTMSSNG
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
		FastIO
		int n;
		cin>>n;
		unordered_set <ll> sx, sy;
		ll ansx, ansy;
		loop0(4*n-1) {
			ll x, y;
			cin>>x>>y;
			if (sx.count(x)) {
				sx.erase(x);
			} else {
				sx.insert(x);
			}
			if (sy.count(y)) {
				sy.erase(y);
			} else {
				sy.insert(y);
			}
		}
		cout<<(*sx.begin())<<" "<<(*sy.begin())<<"\n";
	}
    return 0;
}

