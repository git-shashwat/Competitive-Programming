//https://www.codechef.com/OCT20B/problems/CHEFEZQ
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
	On day i => Qi queries
	But, Chef can answer at most k queries in a single day
	Chef answers max number of queries (not more than k)
	Remaining questions added over to next day
	After n days, queries stop
	
	Find, first day when less than k questions are answered
	n = 1, k = 1
	q[1] = 100
	10 - 5 = 5
*/

int main(){
    test {
		int n, ans;
		ll k;
		cin>>n>>k;
		bool flag = false;
		ll q[n];
		ull total = 0;
		loop0(n) {
			cin>>q[i];
			total += q[i];
		}
		loop0(n) {
			if (q[i] < k) {
				ans = i + 1;
				flag = true;
				break;
			} else if (i != n-1) {
				q[i+1] += q[i] - k;
			}		
		}
		if (flag) {
			cout<<ans<<endl;
		} else {
			cout<<(total / k + 1)<<endl;
		}
	}
    return 0;
}
