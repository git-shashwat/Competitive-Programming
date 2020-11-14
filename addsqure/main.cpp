//https://www.codechef.com/OCT20B/problems/ADDSQURE
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
	N different vertical lines
	N vertical lines of form x = ai (0 <= ai <= W)
	M Horizontal lines of form y = bi (0 <= bi <= H)
	
	Add one line of form y = k (Horizontal line) different from the existing ones. 
	Find max possible number of squares with diff. areas obtained from plane.
	Greedy/DP??
*/

int main(){
    int w, h, n, m;
    ll ans = 0;
    cin>>w>>h>>n>>m;
    int a[n], b[m];
    loop0(n)	{
    	cin>>a[i];
    } 
    loop0(m) {
    	cin>>b[i];
    }
    return 0;
}
