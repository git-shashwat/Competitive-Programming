//https://www.codechef.com/problems/STRSUB
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

ll substringCalculator(string s, int n, int k, int l, int r){
    ll res = 0;
    for(int i = l-1; i < r; i++){
        int cnt0 = 0, cnt1 = 0;
        for(int j = i; j < r; j++){
            if(s[j] == '0')     cnt0++;
            else                cnt1++;
            if(cnt0 <= k && cnt1 <= k)  res++;
            else                        break;
        }
    }
    return res;
}

int main(){
    test {
        int n, k, q;
        cin>>n>>k>>q;
        ll ans[q];
        string s;
        cin>>s;
        int l[q],r[q];
        loop0(q){
            cin>>l[i]>>r[i];
            ans[i] = substringCalculator(s,n, k, l[i],r[i]);
        }
        loop0(q)    cout<<ans[i]<<"\n";
    }
    return 0;
}
