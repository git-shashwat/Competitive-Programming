//https://codeforces.com/contest/1426
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
	N => Types of tiles
	Size = 2 x 2
	Each cell contains 1 integer
	Infinite number of tiles of each type

	Construct square of size m x m with tiles
	Symetric wrt main diagonal matrix (s[i][j] = s[j][i])
*/

int main(){
    test {
		int n, m;
		cin>>n>>m;
		bool flag = false;
		loop0(n) {
			int a[2][2];
			for (int j = 0; j < 2; j++)
				for (int k = 0; k < 2; k++)
					cin>>a[j][k];
			if (a[0][1] == a[1][0])	flag = true;
		}
		if ((m & 1) || !flag) {
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
		}
	}
    return 0;
}
