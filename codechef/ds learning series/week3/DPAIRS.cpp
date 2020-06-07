//https://www.codechef.com/LRNDSA03/problems/DPAIRS
#include<bits/stdc++.h>
#include<limits.h>
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
    int n, m, a, b;
    cin>>n>>m;
    int minIndexB, maxIndexA;
    int maxA = -1000000001, minB = 1000000001;
    loop0(n) {
        cin>>a;
        if (a > maxA) {
            maxA = a;
            maxIndexA = i;
        }
    }
    loop0(m) {
        cin>>b;
        if (b < minB) {
            minB = b;
            minIndexB = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<i<<" "<<minIndexB<<"\n";
    }
    for (int i = 0; i < m; ++i) {
        if (i != minIndexB) cout<<maxIndexA<<" "<<i<<"\n";
    }
    return 0;
}
