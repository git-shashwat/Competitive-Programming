//https://www.codechef.com/OCT20B/problems/CVDRUN
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
	N cities (0 to (N-1)) arranged in circular manner
	0 -> 1, 1 -> 2, ... (N-2) -> (N-1), (N-1) to 0
	
	Current position of virus = city X
	Jumps to the city K to its right i.e from X to (X+K)%N
	Cities in between jump don't get infected
	Cities once infected stay infected
	We live in city Y.
	Find it will reach my city eventually or not?
	
	0 --> 1 --> 2 --> 3 --> 4 --> 5
	|^							  |
	-----------------------------
	
	ptr = 5, base = 5
*/

int main(){
    test {
    	int n, x, y, k;
    	cin>>n>>k>>x>>y;
    	int base = x;
    	bool flag = false;
    	do {
    	    x = (x + k) % n;
    		if (x == y) {
    			flag = true;
    			break;
    		}
    	} while (x != base);
    	flag ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}
