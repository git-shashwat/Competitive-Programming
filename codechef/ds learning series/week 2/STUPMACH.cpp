//https://www.codechef.com/LRNDSA02/problems/STUPMACH
#include<bits/stdc++.h>
#include<limits.h>
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
            int n;
            cin>>n;
            std::vector<ll> v;
            std::vector<ll>::iterator it;
            int high = n, lastSubValue = 0;
            ull ans = 0;
            loop0(n) {
                ll el;
                cin>>el;
                v.pb(el);
            }
            while (high > 0) {
                it = min_element(v.begin(), v.begin()+high);
                int pos = it - v.begin();
                ans += high * (v[pos] - lastSubValue);
                lastSubValue = v[pos];
                high = pos;
            }
            cout<<ans<<"\n";
        }
    return 0;
}
