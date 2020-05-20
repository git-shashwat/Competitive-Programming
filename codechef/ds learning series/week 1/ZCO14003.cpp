//https://www.codechef.com/LRNDSA01/problems/ZCO14003
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    int n;
    cin>>n;
    ll budget[n], maxRevenue = 0;
    loop0(n) {
        cin>>budget[i];
    }
    sort(budget, budget+n);
    loop0(n) {
        maxRevenue = max((budget[i]*(n-i)), maxRevenue);
    }
    cout<<maxRevenue;
}
