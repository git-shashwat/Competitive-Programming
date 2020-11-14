//https://www.codechef.com/OCT20B/problems/REPLESX
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
	Array of N integers: A1, A2,...,An
	Operation: replace the k-th smallest integer in the array with any integer
	Greedy/DP??
	Output: Minimum number of operations you must perform on the array to make the p-th smallest element equal to X. If impossible, output = -1
	N = 5 X = 4 p = 3 k = 4
	--> 4 9 0 7 8
	--> 0 4 7 8 9
	
	Case 1: k < p
	     a) x < a[p]
	     b) x > a[p]
	Case 2: k > p
	     a) x < a[p]
	     b) x > a[p]
	Case 3: k = p
	     a) x < a[p]
	     b) x > a[p]	     
*/

int main(){
    test {
    	int n, p, k, ans = 0;
    	ll x;
    	cin>>n>>x>>p>>k;
    	ll a[n+1] = {0};
    	loop(1, n + 1)	cin>>a[i];
    	sort(a, a + n + 1);
    	if (k < p) {
    		if (a[p] < x) {
    			ans = 1;
    			for (int i = p + 1; i <= n; ++i) {
    				if (a[i] < x)	ans++;
    			}
    		} else if (a[p] > x) {
    			ans = -1;
    		}
    	} 
    	else if (k == p) {
    		if (a[p] < x) {
    			ans = 1;
    			for (int i = p + 1; i <= n; ++i) {
    				if (a[i] < x)	ans++;
    			}
    		} else if (a[p] > x) {
    			ans = 1;
    			for (int i = 1; i <= p - 1; ++i) {
    				if (a[i] > x)	ans++;
    			}
    		}
    	}
    	else {
    		if (a[p] < x) {
    			ans = -1;
    		} else if (a[p] > x) {
    			ans = 1;
    			for (int i = 1; i <= p - 1; ++i) {
    				if (a[i] > x)	ans++;
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
