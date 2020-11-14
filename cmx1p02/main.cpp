//https://www.codechef.com/COMX2020/problems/CMX1P02
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

int lcm(int a, int b) { return (a * b) / __gcd(a, b); }

int main(){
    test {
		int n, r;
		cin>>n;
		int p[n];
		ll cnt = 1;
		loop0(n) {
			cin>>p[i];
			cnt = lcm(cnt, p[i]);
		}
		cin>>r;
		cout<<cnt+r<<"\n";
	}
    return 0;
}
