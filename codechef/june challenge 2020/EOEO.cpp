//https://www.codechef.com/JUNE20B/problems/CHFICRM
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
#define mp make_pair

using namespace std;

int main(){
    test {
        ull ts, ans = 0;
        cin>>ts;
        if (ts&1) {
            ans = ts/2;
        } else {
            while(!(ts&1)) {
                ts /= 2;
            }
            ans = ts/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
