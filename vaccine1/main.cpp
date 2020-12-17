//https://www.codechef.com/DEC20B/problems/VACCINE1
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
	company A - Starts on D1 & V1/day
	company B - Starts on D2 & V2/day
	
	Vaccines required = P
*/

int main(){
    int d1, v1, d2, v2, p;
    cin>>d1>>v1>>d2>>v2>>p;
    int ans = 0, count = 0;
    
    if (d1 < d2)
	{
		ans += d1 - 1;
	}
	else
		ans += d2 - 1;
	while (count < p)
	{
		if (ans >= d1)	
			count += v1;
		if (ans >= d2)
			count += v2;
		ans++;
	}
    
    cout<<--ans<<"\n";
    return 0;
}
