//https://codeforces.com/contest/1405/problem/A
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
		int n, x;
		cin>>n;
		vector <int> p;
		loop0(n) {
			cin>>x;
			p.pb(x);
		}
		for (int i = n-1; i >= 0; --i) {
			cout<<p[i]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
