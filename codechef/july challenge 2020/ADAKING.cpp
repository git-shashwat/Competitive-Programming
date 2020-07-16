//https://www.codechef.com/JULY20B/problems/ADAKING
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
		int k;
		cin>>k;
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (i == 0 && j == 0) {
					cout<<"O";
					--k;
				} else {
					if(--k >= 0) {
						cout<<".";
					} else {
						cout<<"X";
					}
				}
			}
			cout<<"\n";
		}
	}
    return 0;
}
