//https://www.codechef.com/problems/MAXDIFF
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
using namespace std;

int main(){
    test{
        short K,N;
        cin>>N>>K;
        long W[N];
        ll total=0,sum=0;
        loop(i,0,N){
            cin>>W[i];
            total+=W[i];
        }
        int mid=N/2,pos;
        sort(W,W+N,greater<lo>());
        if(K>mid)
            pos=K;
          else 
            pos=N-K;
        loop(i,0,pos)
            sum+=W[i];
        cout<<abs((total-2*sum))<<"\n";
    }
    return 0;
}
