//https://www.codechef.com/problems/CHEFST
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
using namespace std;

/*Declaration of stone()*/
ll stone(ll n1,ll n2,lo m){
    ll sum=m*(m+1)/2, res=min(n1,n2);
    return (n1+n2-2*min(sum,res));
}
int main(){
    test{
        ll n1,n2,ans;
        lo m;
        cin>>n1>>n2>>m;
        ans=stone(n1,n2,m);
        cout<<ans<<"\n";
    }
    return
    0;
}
