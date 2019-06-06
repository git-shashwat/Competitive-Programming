//https://www.codechef.com/problems/TADELIVE
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
using namespace std;

int main(){
    lo n,x,y,maxdiff,cur=0,diff;
    ll ans=0;
    cin>>n>>x>>y;
    lo a[n],b[n];
    bool pos[n]={false};
    vector<pair <lo,lo> > positive_a;
    vector<pair <lo,lo> > positive_b; 
    loop(i,0,n)     cin>>a[i];
    loop(i,0,n)     cin>>b[i];
    loop(i,0,n){
        diff = a[i]-b[i];
        if(diff>=0)  positive_a.push_back(make_pair(i,diff));
        else         positive_b.push_back(make_pair(i,-1*diff));
    }
    if(x<=y){
        sort(positive_a.begin(),positive_a.end(),[](const pair <lo,lo> p1, const pair <lo,lo> p2){
        return p1.second > p2.second;
    });
        while(x!=0 && !positive_a.empty()){
            cur = positive_a.begin()->first;
                pos[cur]=true;
                x--;
                positive_a.erase(positive_a.begin());
        }
        loop(i,0,n){
            if(pos[i])  ans+=a[i];
            else        ans+=b[i];
        }
    }
    else{
        sort(positive_b.begin(),positive_b.end(),[](const pair <lo,lo> p1, const pair <lo,lo> p2){
        return p1.second > p2.second;
    });
        while(y!=0 && !positive_b.empty()){
            cur = positive_b.begin()->first;
            pos[cur] = true;
            y--;
            positive_b.erase(positive_b.begin());
        }
        loop(i,0,n){
            if(pos[i])  ans+=b[i];
            else        ans+=a[i];
        }
    }
    cout<<ans;
    return 0;
}
