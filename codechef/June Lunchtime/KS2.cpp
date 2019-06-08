// https://www.codechef.com/JUNE19B/problems/KS2
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ull unsigned long long
using namespace std;

ull sum(ull x){
    ull ans = 0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
int main(){
    test{
        ull n;
        cin>>n;
        ull res = 10*n;
        for(ull i = res;i <= res+10; i++){
            if(sum(i)%10 == 0){
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
