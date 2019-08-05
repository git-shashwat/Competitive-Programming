//https://www.codechef.com/AUG19B/problems/MSNSADM1
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
    test {
        int n;
        cin>>n;
        int a[n],b[n], ans = 0;
        loop0(n){
            cin>>a[i];
        }
        loop0(n){
            cin>>b[i];
        }
        loop0(n){
            ans = max(ans,20*a[i] - 10*b[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
