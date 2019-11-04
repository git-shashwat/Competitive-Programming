//http://codeforces.com/problemset/problem/281/D
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
    std::stack<ull> s;
    int n;
    cin>>n;
    ull a[n], lucky = 0;
    loop0(n) {
        cin>>a[i];
    }
    loop0(n) {
        while(!s.empty()) {
            if (s.top() < a[i]) {
                lucky = max(lucky, s.top() ^ a[i]);
                s.pop();
            } else {
                lucky = max(lucky, s.top() ^ a[i]);
                break;
            }
        }
        s.push(a[i]);
    }
    cout<<lucky;
    return 0;
}
