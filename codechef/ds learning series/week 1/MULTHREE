//https://www.codechef.com/LRNDSA01/problems/LADDU
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
        int d0, d1, d2, d3, a[4];
        ull k, sum = 0, patternCount = 0, rem = 0;
        cin>>k>>d0>>d1;
        sum = d0 + d1;
        d2 = (d0 + d1)%10;
        sum += d2;
        d3 = sum%10;
        rem = (k-3)%4;
        a[0] = d3;
        a[1] = (a[0]*2)%10;
        a[2] = (a[1]*2)%10;
        a[3] = (a[2]*2)%10;
        patternCount = (k-3)/4;
        loop0(rem) {
            sum += a[i];
        }
        sum += patternCount*(a[0]+a[1]+a[2]+a[3]);
        if (k == 2) sum = d0+d1;
        if (k == 3) sum = d0+d1+d2;
        !(sum%3) ? cout<<"YES\n" : cout<<"NO\n";
    }   
}
