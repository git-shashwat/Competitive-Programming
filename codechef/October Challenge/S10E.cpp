//https://www.codechef.com/OCT19B/problems/S10E
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
        int p[n], ans = 1;
        loop0(n) {
            cin>>p[i];
            if (i < 5) {
                if (*min_element(p,p+i) > p[i]) {
                    ans++;
                }
            } else {
                if (*min_element(p+i-5, p+i) > p[i]) {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
