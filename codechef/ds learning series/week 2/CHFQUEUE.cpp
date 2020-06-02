//https://www.codechef.com/LRNDSA02/problems/CHFQUEUE
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
        ll n, k;
        cin>>n>>k;
        ull ans = 1;
        bool isMinFound = false;
        std::vector<ll> arr(n), nse(n);
        std::stack<pair<ll, ll>> st;
        loop0(n) {
            cin>>arr[i];
        }
        loop0(n) {
            if (st.empty()) {
                st.push({ i, arr[i] });
            } else {
                while(!st.empty() && (st.top().second > arr[i])) {
                    nse[st.top().first] = i;
                    st.pop();
                }
                st.push({ i, arr[i] });
            }
        }
        while(!st.empty()) {
            nse[st.top().first] = -1;
            st.pop();
        }
        loop0(n) {
            if (nse[i] != -1) {
                ans = (ans*(nse[i]-i+1))%MOD;
            }
        }
        cout<<ans<<"\n";
    return 0;
}
