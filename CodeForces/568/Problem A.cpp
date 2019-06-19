 //http://codeforces.com/contest/1185/problem/0
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
#define push_back pb
#define pop_back po
using namespace std;

int main(){
    ll a,b,c,d,ans = 0;
    cin>>a>>b>>c>>d;
    ll arr[3] = {a,b,c};
    sort(arr,arr+3);
    ll d1 = abs(arr[1] - arr[0]), d2 = abs(arr[2] - arr[1]);
    if(d1 < d)  ans += abs(d-d1);
    if(d2 < d)  ans += abs(d-d2);
    cout<<ans<<"\n";
    return 0;
}
