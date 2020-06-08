//https://www.codechef.com/JUNE20B/problems/EVENM
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
        vector <vector<int>> v;
        if (n&1) {
            for (int i = 1; i <= n*n; ++i) {
                cout<<i<<" ";
                if (i%n == 0) {
                    cout<<"\n";
                }
            }
        } else {
            int inc = 1, start = 1, count = 1;
            for (int i = 0; i < n; ++i) {
                vector <int> v1;
                for (int j = 0; j < n; ++j ) {
                    v1.pb(count++);
                }
                v.pb(v1);
            }
            for(int i = 0; i < n; ++i) {
                if (!(i&1)) {
                    inc = 1;
                    start = 0;
                } else {
                    inc = -1;
                    start = n-1;
                }
                for (int j = start; !(i&1) ? j < n : j > -1; j += inc) {
                    cout<<v[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}
