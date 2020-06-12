//https://www.codechef.com/LRNDSA03/problems/EXUNC
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
#define mp make_pair

using namespace std;
std::set<int> s;

int checkForSubArr (int x) {
    auto it = s.upper_bound(x);
    it--;
    return (*it);
}

int main(){
    int n, q;
    cin>>n>>q;
    int a[n+1];
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
    }
    s.insert(1);
    for (int i = 2; i <= n; i++) {
        if (a[i]%a[i-1] == 0) continue;
        s.insert(i);
    }
    while(q--) {
        int type, i;
        cin>>type>>i;
        if (type == 1) {
            cin>>a[i];
            if (i > 1) {
                if ((checkForSubArr(i) == i) && (a[i]%a[i-1] == 0)) {
                    s.erase(i);
                }
                else if ((checkForSubArr(i) < i) && (a[i]%a[i-1] != 0)) {
                    s.insert(i);
                }
            }
            if (i < n) {
                if ((checkForSubArr(i+1) > i) && (a[i+1]%a[i] == 0)) {
                    s.erase(i+1);
                }
                else if ((checkForSubArr(i+1) <= i) && (a[i+1]%a[i] != 0)) {
                    s.insert(i+1);
                }    
            }
        } else {
            cout<<checkForSubArr(i)<<endl;
        }
    }
    return 0;
}
