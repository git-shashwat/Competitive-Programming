//https://www.codechef.com/problems/COMPILER
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
        int ans = 0, t = 0;
        string xml;
        cin>>xml;
        loop0(xml.size()) {
            if (xml[i] == '<') {
                t++;
            } else {
                t--;
                if (t == 0)     ans = max(ans,i+1);
                else if (t < 0) break;
            }
    }
    cout<<ans<<"\n";
    }
    return 0;
}
