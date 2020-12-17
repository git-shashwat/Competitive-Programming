//http://codeforces.com/contest/1463/problem/0
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
	a, b, c
	cannon fire power = 1
	every 7th fire = 1 damage to each (enhanced shot)
	If health = 0, it can't be targeted again
	kill all monsters with same enhanced shot
	each shot damages at least one monster
*/

int main(){
    test {
    	ll a, b, c;
    	cin>>a>>b>>c;
    	if ((a+b+c-2) % 7 == 0) {
    		cout<<"YES\n";
    	} else {
    		cout<<"NO\n";
    	}
    }
    return 0;
}
