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
        ll n, ans = 0, multiplier = 5;
        cin>>n;
        if (n < 5) {
            cout<<"0\n";
            continue;
        }
        ll copy = n;
        while(copy != 0) {
            ans += n/multiplier;
            copy = n/multiplier;
            multiplier *= 5;
        }
        cout<<ans<<"\n";
    }   
}
