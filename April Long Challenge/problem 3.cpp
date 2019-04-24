//https://www.codechef.com/APRIL19B/problems/FENCE
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(ll i=a;i<b;++i)
#define MOD 1000000007
#define ll long long
using namespace std;

int main(){
test{
   vector< pair<ll,ll> >vect;
   ll N,M,K,r,c,fence=0;
   cin>>N>>M>>K;
   while(K--){
      cin>>r>>c;
      vect.push_back(make_pair(r,c));
   }
   sort(vect.begin(),vect.end());
   for(ll j=0;j<vect.size();j++){
      ll row=vect[j].first,col=vect[j].second;
      if(!binary_search(vect.begin(),vect.end(),make_pair(row-1,col)))
        fence++;
      if(!binary_search(vect.begin(),vect.end(),make_pair(row,col-1)))
        fence++;
      if(!binary_search(vect.begin(),vect.end(),make_pair(row+1,col)))
        fence++;
      if(!binary_search(vect.begin(),vect.end(),make_pair(row,col+1)))
        fence++;
      }
   cout<<fence<<"\n";
}
return 0;
}
