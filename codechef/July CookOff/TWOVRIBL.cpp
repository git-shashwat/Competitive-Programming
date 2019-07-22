//https://www.codechef.com/COOK108B/problems/TWOVRIBL
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
        long xi = 0,yi = 0,p = 1,xf, ans = 0;
        cin>>xf;
        while (xf >= sqrt(yi+p*p)) {
            yi += p*p;
            p = ceil(sqrt(yi));
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
