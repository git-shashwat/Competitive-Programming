//https://www.codechef.com/COMX2020/problems/CMX1P01
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
		int n, m;
		cin>>n>>m;
		int g[n], l[n], lg[m];
		map <int, vector <int> > mp;
		loop0(n) {
			cin>>g[i];
		}
		loop0(n) {
			cin>>l[i];
		}
		loop0(m) {
			cin>>lg[i];
		}
		loop0(n) {
			mp[g[i]].pb(l[i]);
		}
		for (auto ptr: mp) {
			int ans = 0, cnt = 1;
			for (int i = 0; i < ptr.second.size(); ++i) {
				int new_res = cnt * ptr.second[i];
				if (new_res%lg[ptr.first-1] > ans) {
					ans = new_res%lg[ptr.first-1];
					cnt = new_res;
				}
			}
			cout<<ans<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
