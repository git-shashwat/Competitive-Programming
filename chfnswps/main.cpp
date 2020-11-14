//https://www.codechef.com/JULY20B/problems/CHFNSWPS
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

int main(){
    test {
		int n;
		cin>>n;
		ll a[n], b[n];
		map <ll, int> ma, mb;
		ll ans = 0;
		loop0(n) {
			cin>>a[i];
			++ma[a[i]];
		}
		loop0(n) {
			cin>>b[i];
			++mb[b[i]];
		}
		for (int i = 0, j = 0; i < n, j < n;) {
			if ((a[i] == b[i]))) {
				i++;
				j++;
				continue;
			}
			bool isSwapableA = !(abs(ma[a[i]] - mb[a[i]]) & 1),
			     isSwapableB = !(abs(ma[b[i]] - mb[b[i]]) & 1);
			if (isSwapableA && isSwapableB) {
				a[i] = a[i] ^ b[i];
				b[i] = a[i] ^ b[i];
				a[i] = a[i] ^ b[i];
			
				ma[a[i]]--;
				mb[a[i]]++;
				ma[b[i]]++;
				mb[b[i]]--;

				ans += min(a[i], b[j]);

				i++;
				j++;

			}
			if (!isSwapableA) {
				i++;
			}
			if (!isSwapableB) {
				j++;
			}
		}
		cout<<ans<<endl;
	}
    return 0;
}
