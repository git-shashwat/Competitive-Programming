//https://www.codechef.com/LRNDSA01/problems/LADDU
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
        const int TOP_CONTRIBUTOR = 300, CONTEST_HOSTED = 50;
        int ans = 0, n, total = 0;
        string origin;
        cin>>n>>origin;
        loop0(n) {
            string activity;
            int num = 0;
            cin>>activity;
            if (activity == "CONTEST_WON") {
                int rank;
                cin>>rank;
                rank < 20 ? total += 320 - rank : total += 300;
            } else if (activity == "TOP_CONTRIBUTOR") {
                total += TOP_CONTRIBUTOR;   
            } else if (activity == "BUG_FOUND") {
                int severity;
                cin>>severity;
                total += severity;
            } else {
                total += CONTEST_HOSTED;
            }
        }
        origin == "INDIAN" ? ans = total/200 : ans = total/400;
        cout<<ans<<"\n";
    }   
}
