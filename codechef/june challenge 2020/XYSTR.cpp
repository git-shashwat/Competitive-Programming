//https://www.codechef.com/JUNE20B/problems/XYSTR
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
        string s;
        int ans = 0;
        cin>>s;
        loop0(s.size()-1) {
            if ((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x')) {
                ans++;
                ++i;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
