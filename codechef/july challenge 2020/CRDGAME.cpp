//https://www.codechef.com/JULY20B/problems/CRDGAME
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
		int chef_score = 0, morty_score = 0;
		loop0(n) {
			ll a, b;
			cin>>a>>b;
			int chef_cnt = 0, morty_cnt = 0;
			while (a != 0) {
				chef_cnt += a % 10;
				a /= 10;
			}
			while (b != 0) {
				morty_cnt += b % 10;
				b /= 10;
			}
			if (chef_cnt > morty_cnt) {
				chef_score++;
			} else if (chef_cnt < morty_cnt) {
				morty_score++;
			} else {
				chef_score++;
				morty_score++;
			}
		}
		if (chef_score > morty_score) {
			cout<<"0 "<<chef_score<<endl;
		} else if (morty_score > chef_score) {
			cout<<"1 "<<morty_score<<endl;
		} else {
			cout<<"2 "<<chef_score<<endl;
		}
	}
    return 0;
}
