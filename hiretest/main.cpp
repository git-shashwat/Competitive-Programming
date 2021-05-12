//https://www.codechef.com/START3C/problems/HIRETEST
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
    /* 
    	N - candidates appeared
    	M - problems faced by each
    	U - unsolved
    	P - partially
    	F - completely
    	candidate pass if
    		- solve >= X problems completely
    		- solve (X-1) problems completely AND >=Y problems partially
    */
    test {
    	int n, m;
    	cin>>n>>m;
    	int x, y;
    	cin>>x>>y;
    	for (int i = 0; i < n; ++i) {
    		int pcnt = 0, fcnt = 0;
    		for (int j = 0; j < m; ++j) {
    			char a;
    			cin>>a;
    			if (a == 'P')	pcnt++;
    			else if (a == 'F') fcnt++;
    		}
    		if ((fcnt >= x) || (fcnt == (x-1) && pcnt >= y)) {
    			cout<<"1";
    		} else {
    			cout<<"0";
    		}
    	}
    	cout<<endl;
    }
    return 0;
}
