//https://www.codechef.com/problems/CLETAB
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(ll i=a;i<b;++i)
#define MOD 1000000007
#define ll long long
using namespace std;

int main(){
 test{
        int n,m,clean=0;
        cin>>n>>m;
        int c[m];
        map<int, pair <int,int> > mp;
        vector <int> customer;
        loop(i,0,m){
            cin>>c[i];
            if(mp.find(c[i])==mp.end())
                mp.insert({c[i],make_pair(c[i],1)});
            else
                mp[c[i]].second++;
        }
        
       for(auto itr=mp.begin();itr!=mp.end();++itr){
            cout<<itr->first<<"\tPair: "<<itr->second.first<<" "<<itr->second.second;
            cout<<endl;
        }
        cout<<endl;
    }
return 0;
}
