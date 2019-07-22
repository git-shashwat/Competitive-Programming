//https://www.codechef.com/COOK108B/problems/PLAYSTR
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test{
        int n,s1 = 0,s0 = 0,r1 = 0,r0 = 0;
        cin>>n;
        string s,r;
        cin>>s>>r;
        loop0(n){
            if (s[i] == '1')    s1++;
            if (s[i] == '0')    s0++;
            if (r[i] == '1')    r1++;
            if (r[i] == '0')    r0++;
        }
        if ((s1 == r1) && (s0 == r0))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
