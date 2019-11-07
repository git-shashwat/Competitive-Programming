//http://codeforces.com/contest/343/problem/B
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
    std::stack<char> s;
    string w;
    cin>>w;
    loop0(w.size()) {
        if(!s.empty() && s.top() == w[i]) {
            s.pop();
        } else {
            s.push(w[i]);
        }
    }
    if(s.empty()) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}
