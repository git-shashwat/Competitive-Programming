//https://codeforces.com/contest/1426/problem/0
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
	Apartment number = n
	First floor = 2 apartments
	Every other floor contains = x apartments each
	Apartment Numbers ==> 1st Floor (1, 2) & second floor (3 to (x + 2)) & 3rd floor ((x+3) to (2.x + 2))
	Find the number of floor on which Petya lives

	n = 7 x = 3
*/

int main(){
    test {
		int n, x;
		cin>>n>>x;
		if (n == 1 || n == 2)	cout<<"1\n";
		else {
			int f = (n-3)/x	+ 2;
			cout<<f<<"\n";
		}
	}
    return 0;
}
