//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    int t;
    cin>>t;
    loop0(t) {
        int n;
        cin>>n;
        int a[n];
        loop0(n) {
            cin>>a[i];
        }
        
        int cd = a[1] - a[0], ans = 2;
        int prefix[n];
        prefix[1] = 2;
        for (int i = 2; i < n; ++i) {
            if (a[i]-a[i-1] == cd) {
                prefix[i] = prefix[i-1] + 1;
            } else {
                prefix[i] = 2;
            }
            cd = a[i] - a[i-1];
            ans = max(ans, prefix[i]);
        }
        cout<<"Case #"<<i+1<<": "<<ans<<"\n";
    }
    return 0;
}
