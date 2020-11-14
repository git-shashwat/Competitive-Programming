//https://codeforces.com/contest/1433/problem/B
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
	bookshelf - n books
	ai = 1 => book
	ai = 0 => no book
	*atleast 1 book on bookshelf*
	
	1 move ==> [l, r]: contiguous segment
	a) Shift it right by 1
	b) Shift it left by 1
	
	Evaluate: Min number of moves required to collect all books on shelf as 	contiguous
	
	**Greedy**
*/

int main(){
    test {
    	int n, ans = 0;
    	cin>>n;
    	n = n+1;
    	int a[n] = {0};
    	vector<int> pos;
    	loop(1, n) {
    		cin>>a[i];
    		if(a[i]) {
    			pos.pb(i);
    		}
    	}
		if(pos.size() != 1) {
			loop0(pos.size() - 1) {
				ans += abs(pos[i] - pos[i+1]) - 1;
			}
		}
    	cout<<ans<<"\n";
    }
    return 0;
}
