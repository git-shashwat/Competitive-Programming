//https://www.codechef.com/DEC20B/problems/VACCINE2
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
    	int n, d;
    	cin>>n>>d;
    	int a[n], risk = 0, ans = 0;
    	loop0(n) {
			cin>>a[i];
			if (a[i] <= 9 || a[i] >= 80)
				risk++;    	
    	}
    	if (d == 1)	ans = n;
    	else ans = ceil((float)risk/d) + ceil((float)(n-risk)/d);
    	cout<<ans<<"\n";
    }
    return 0;
}
