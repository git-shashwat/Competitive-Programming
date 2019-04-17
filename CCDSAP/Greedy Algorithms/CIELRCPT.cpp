//https://www.codechef.com/problems/CIELRCPT
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define ll long long
using namespace std;

/*Declaration of dish()*/ 
int main(){
    test{
        int menu[11];
        long p,ans=0;
        cin>>p;
        loop(i,0,12)
            menu[i]=pow(2,i);
        loop(i,0,12){
            if(p==0)
                break;
            if(p>2048){
                ans+=p/2048;
                p%=2048;
                i=0;
                continue;
            }
            if(p<menu[i]){
                ans+=p/menu[--i];
                p%=menu[i];
                i--;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
