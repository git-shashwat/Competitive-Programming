//https://csacademy.com/contest/algorithms-2019-08-17-14/task/max-wave-array/
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
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
    ll a[n];
    loop0(n){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    loop0(n-1){
        if(i&1){
            a[i] ^= a[i+1];
            a[i+1] ^= a[i];
            a[i] ^= a[i+1];
        }
    }
    loop0(n){
        cout<<a[i]<<" ";
    }
    return 0;
}
