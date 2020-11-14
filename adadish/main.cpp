//https://www.codechef.com/NOV20B/problems/ADADISH
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
    	int n, ans;
    	cin>>n;
    	int c[n];
    	loop0(n) {
    		cin>>c[i];
    	}
    	sort(c, c+n);
    	if (c[0] == c[n-1]) {
			ans = c[0] * ceil(n*1.0/2);
    	} else {
			ans = c[n-2];
			int stove = c[n-1] - c[n-2];
			for (int i = n-3; i >= 0; --i) {
				ans += min(stove, c[i]);
				stove = abs(stove - c[i]);
			}
			ans += stove;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
