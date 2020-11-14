//https://www.codechef.com/SEPT20B/problems/COVID19B
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

const int MAX_SIZE = 5;

int main(){
    test {
		int n;	cin>>n;
		vector <int> v(n);
		loop0(n)	cin>>v[i];
		map<pair<int, int>, vector<int> >mp;
		int min_ans = n, max_ans = 0;
		loop0(n) {
			for (int j = i+1; j < n; ++j) {
				if (v[i] > v[j]) {
					int t = ((j-i)*120)/(v[i]-v[j]);
					int x = i*120 + v[i]*t;
					assert(120*i+v[i]*t == 120*j+v[j]*t);
					mp[{t, x}].pb(i);
					mp[{t, x}].pb(j);
				}
			}
		}
		loop0(n) {
			vector <bool>infected(n);
			infected[i] = true;
			for(auto ptr:mp) {
				bool spread = false;
				for(auto p:ptr.second)	spread |= infected[p];
				if (spread) {
					for(int x:ptr.second)	infected[x] = true;
				}
			}
			int count = 0;
			for(int x:infected)	count += x;
			min_ans = min(min_ans, count);
			max_ans = max(max_ans, count);
		}
		cout<<min_ans<<" "<<max_ans<<endl;
	}
    return 0;
}
