//https://www.codechef.com/LRNDSA04/problems/LOWSUM
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back 

using namespace std;

int countPairs(ull a[], ull b[], int k, ull x) {
	int count = 0;  
    int l = 0, r = k - 1; 
    
    while (l < k && r >= 0) {
		if ((a[l] + b[r]) < x) {
			count++;
			l++;
		} else {
			r--;
		}
	}
    return count;
} 

int main(){
    test {
		int k, q;
		cin>>k>>q;
		vector <ull> a(k), b(k);
		vector <ull> sum;
		int query[q];
		loop0(k) {
			cin>>a[i];
		}
		loop0(k) {
			cin>>b[i];
		}
		sort(all(a));
		sort(all(b));
		if (k <= 100) {
			for (int i = 0; i < k; ++i) {
				for (int j = 0; j < k; ++j) {
					sum.pb(a[i]+b[j]);
				}
			}
		} else {
			ull max_sum = a[100] + b[100];
			for (ll i = 0; i < k; i++) {
				for(ll j=0;j<k && (a[i]+b[j])<=max_sum;j++) {
            		sum.pb(a[i]+b[j]);
       			}
			}
		}
		sort(all(sum));
		loop0(q) {
			ll query;
			cin>>query;
			cout<<sum[query-1]<<endl;
		}
	}
    return 0;
}
