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
    lo n,x,y,maxdiff,cur=0;
    ll ans=0;
    cin>>n>>x>>y;
    lo a[n],b[n],diff_a[n]={0},diff_b[n]={0};
    bool pos[n]={false};
    loop(i,0,n)     cin>>a[i];
    loop(i,0,n)     cin>>b[i];
    loop(i,0,n){
        diff_a[i]=a[i]-b[i];
        diff_b[i]=-1*diff_a[i];
    }
    if(x<=y){
        while(x!=0){
            maxdiff=diff_a[cur];
            loop(i,0,n){
                if(diff_a[i]>maxdiff&&pos[i]==false){
                    maxdiff=diff_a[i];
                    cur=i;
                }
            }
            if(maxdiff>=0){
                pos[cur]=true;
                diff_a[cur]=-9999999;
                x--;
            }
        }
        loop(i,0,n){
            if(pos[i])  ans+=a[i];
            else        ans+=b[i];
        }
    }
    else{
        while(y!=0){
            maxdiff=diff_b[cur];
            loop(i,0,n){
                if(diff_b[i]>maxdiff&&pos[i]==false){
                    maxdiff=diff_b[i];
                    cur=i;
                }
            }
            if(maxdiff>=0){
                pos[cur]=true;
                diff_b[cur]=-9999999;
                y--;
            }
        }
        loop(i,0,n){
            if(pos[i])  ans+=b[i];
            else        ans+=a[i];
        }
    }
    cout<<ans;
    return 0;
}
