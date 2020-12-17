//http://codeforces.com/contest/1462/problem/0
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
#define vi vector<int>
#define vl vector<ll>
#define mi map<int,int>
#define si set<int>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
    	int n;
    	cin>>n;
    	vl b, c;
    	ll x;
    	loop0(n) {
    		cin>>x;
    		b.pb(x);
    	}
    	loop0(n/2 + 1) {
    		c.pb(b[i]);
    		c.pb(b[n-i-1]);
    	}
    	loop0(n) {
    		cout<<c[i]<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}
