//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    FastIO
    test {
        int g;
        cin>>g;
        loop0(g) {
            int j,q;
            ll n, ans = 0;
            cin>>j>>n>>q;
            if ((n&1) && (j != q)) {
                ans = n/2 + 1;
            } else {
                ans = n/2;
            }
            cout<<ans<<"\n";
        }
        cout<<"\n";
    }   
}
