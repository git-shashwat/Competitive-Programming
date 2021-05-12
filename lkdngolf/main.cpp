//https://www.codechef.com/MAY21C/problems/LKDNGOLF
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

/*
	N + 2 tiles => 0 to N + 1
	0	1	2	3	"4"	5	6
*/

int main(){
    test {
    	ll n, x, k;
    	cin>>n>>x>>k;
    	string ans = "NO";
    	if (n&1) {
    		if (x%k == 0 || k%x == 0)
    			ans = "YES";
    	} else {
    		if (x%k != 0 || k%x != 0)
    			ans = "YES";
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
