//https://codeforces.com/contest/1420/problem/B
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(n) for(int i=0;i<n;++i)
#define rloop0(n) for(int i=n;i>=0;--i)
#define rloop(a,b) for(int i=b; i>=a; --i)
#define MOD 1000000007
#define ull unsigned long long
#define int long long
#define vi vector<int>
#define vl vector<long long>
#define mi map<int,int>
#define si set<int>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

/*
	n -> Positive integer
	a -> array of positive integers
	(i, j)	i < j and ai & aj >= ai ^ aj
	Ques: Count such pairs
	ai	aj	ai & aj 	ai ^ aj		valid
	0	0	   0		   0		  Y
	0	1	   0		   1		  N
	1	1	   1		   0		  Y
	1	0	   0		   1		  N
*/

signed main(){
	test {
		int n;
		cin>>n;
		int a[n];
		loop0(n)	cin>>a[i];
		int cnt = 0;
		
		cout<<cnt<<endl;
	}
	return 0;
}
