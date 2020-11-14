//https://codeforces.com/contest/1426/problem/C
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
	Initial array ==> a = [1]
	In one move, following operations ==>
		i) a[i]++
		ii) append a[i] to the array
	Find the MINIMUM number of moves to obtain the array with sum at least N
	== GREEDY ==
	Upper bound = N

*/

int main(){
    test {
		ll n;
		cin>>n;
		int ans;
		if (n == 1) {
			cout<<"0\n";
			continue;
		}
		double temp = sqrt(n);
		if (temp - floor(temp) == 0) {
			ans = (int) (2 * temp - 2);
		} else {
			ans = (int) (2 * temp - 1);
		}
		cout<<ans<<"\n";
	}
    return 0;
}
