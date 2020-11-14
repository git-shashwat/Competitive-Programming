//https://codeforces.com/contest/1397/problem/0
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
		int n, flag = 1;
		cin>>n;
		string v[n];
		map <char, int> m;
		loop0(n){
			cin>>v[i];
		}
		for (int i = 0; i < n; ++i) {
			for(int j = 0; j < v[i].size(); ++j) {
				m[v[i][j]]++;
			}
		}
		for(auto ptr: m) {
			if (ptr.second % n) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	} 
    return 0;
}
