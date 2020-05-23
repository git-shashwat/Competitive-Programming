//https://www.codechef.com/LRNDSA02/problems/STFOOD
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
        int n;
        cin>>n;
        int s[n], v[n], p[n], maxProfit = 0;
        loop0(n) {
            cin>>s[i]>>p[i]>>v[i];
        }
        loop0(n) {
            int sharePerPerson = floor(p[i]/(s[i]+1));
            maxProfit = max(maxProfit, sharePerPerson*v[i]);
        }
        cout<<maxProfit<<"\n";
    }   
    return 0;
}
