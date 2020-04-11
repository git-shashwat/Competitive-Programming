//https://www.codechef.com/APRIL20B/problems/COVIDLQ#
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
		int n;
		bool killthisguy = false;
		cin>>n;
		int a[n];
		vector <int> occupied;
		loop0(n) {
			cin>>a[i];
			if (a[i] == 1) {
				occupied.pb(i);
			}
		}
		loop0(occupied.size()-1) {
			if (occupied[i+1] - occupied[i] < 6) {
				killthisguy = true;
				break;
			}
		}
		if (killthisguy) {
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
		}
	}
    return 0;
}
