//https://www.codechef.com/COOK107B/problems/EXAM1
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define push_back pb
#define pop_back po

using namespace std;

int main(){
    test{
       int n,m,day;
       ll taste;
       ull sum = 0;
       cin>>n>>m;
       vector <ll> v(n,0);
       loop(i,0,n){
           cin>>day>>taste;
           if (taste > v[day]){
               v[day] = taste; 
           }
       }
    sort(v.begin(),v.end(),greater<int>());
    cout<<accumulate(v.begin(),v.begin()+2,sum)<<"\n";
    }
    return 0;
}
