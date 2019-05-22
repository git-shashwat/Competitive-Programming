//https://www.codechef.com/APRIL19B/problems/STRCH
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
using namespace std;

int main(){
    test{
        long N,cnt=0;
        string S;
        char X;
        cin>>N>>S>>X;
        long flast=S.find_last_of(X);
        long last=N-1;
        for(long i=0;i<=flast;i++){
            size_t first= S.find(X,i);
            cnt+=(last-first+1);
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
