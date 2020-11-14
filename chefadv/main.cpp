//https://www.codechef.com/LRNDSA05/problems/CHEFADV
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
		ll n, m, x, y;
		cin>>n>>m>>x>>y;
		ll k = n-1, p = m-1;
		if (k%x == 0 && p%y == 0) {
			cout<<"Chefirnemo\n";
		}
		else {
			if (k != 0 && p != 0) {
				k = k-1;
				p = p-1;
				if (k%x == 0 && p%y == 0) {
					cout<<"Chefirnemo\n";
				} else {
					cout<<"Pofik\n";
				}
			} else {
				cout<<"Pofik\n";
			}
		}
	}
    return 0;
}
