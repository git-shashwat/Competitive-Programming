//https://codeforces.com/contest/1433/problem/0
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
	apartments - 1 to 10000
	Boring apartment - same digits
	calls boring apartments, till someone answers the call
		- 1: 1, 11, 111, ....
		- 2: 2, 22, 222, ....
		...
	Resident of boring apartment x ansers => character stops
	Evaluate - Total digits pressed.
	
	Boring apartments pattern
	1 -> 1 x 10e0, 1 x 10e1 + 1, ...
*/

int main(){
    test {
    	int prefix[] = {0, 1, 3, 6, 10}, ans = 0;
    	int x;
    	cin>>x;
    	int number_of_digits = (int)log10(x);
    	int first_digit = (int)(x / pow(10, number_of_digits));
    	ans = 10*(first_digit - 1) + prefix[number_of_digits + 1];
    	cout<<ans<<endl;
    }
    return 0;
}
