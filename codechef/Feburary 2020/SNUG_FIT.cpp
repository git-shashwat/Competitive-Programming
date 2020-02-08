//https://www.codechef.com/FEB20B/problems/SNUG_FIT
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
    test {
        int n;
        cin>>n;
        ull a[n], b[n], ans = 0;
        loop0(n) {
            cin>>a[i];
        }
        loop0(n) {
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        loop0(n) {
            ans += min(a[i], b[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
