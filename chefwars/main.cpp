//https://www.codechef.com/AUG20B/problems/CHEFWARS
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
		int h, p;
		cin>>h>>p;
		bool jediWins = false;
		while (p != 0) {
			h -= p;
			if (h <= 0) {
				jediWins = true;
				break;
			}
			p /= 2;
		}
		if (jediWins) {
			cout<<"1\n";
		} else {
			cout<<"0\n";
		}
	}
    return 0;
}
