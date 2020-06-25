//https://www.codechef.com/LRNDSA05/problems/HMAPPY2
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
        ull k, n;
        ll a, b;
        cin>>n>>a>>b>>k;
        ull ans = 0, lcm = (a*b)/(__gcd(a, b));
        ans = (n/a) + (n/b) - 2*(n/lcm);
        ans >= k ? cout<<"Win\n" : cout<<"Lose\n";
    }
    return 0;
}
