//https://www.codechef.com/problems/TACHSTCK
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(long i=a;i<b;++i)
#define MOD 1000000007
#define ll long long
using namespace std;

int main(){
    long N;
    ll D;
    cin>>N>>D;
    vector <ll> L(N);
    vector <pair<ll,ll> >vect;
    loop(i,0,N)
        cin>>L[i];
    sort(L.begin(),L.end(),greater<ll>());
    loop(i,0,N-1){
        if(L[i]-L[i+1]<=D){
            vect.push_back(make_pair(L[i],L[i+1]));
            i++;
        }
    }
    cout<<vect.size();
    return 0;
}
