//https://www.codechef.com/LRNDSA01/problems/FLOW007
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
        int rev = 0, rem;
        while (n != 0) {
            rem = n%10;
            rev = rev*10 + rem;
            n /= 10;
        }
        cout<<rev<<"\n";
    }
    return 0;
}
