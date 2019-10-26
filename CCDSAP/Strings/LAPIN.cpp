//https://www.codechef.com/problems/LAPIN
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
        string s;
        cin>>s;
        int n = s.size();
        std::map<char, int> map1, map2;
        for(int i=0, j=n-1; i < n/2, n&1 ? j>n/2 : j >= n/2; ++i, --j) {
            map1[s[i]]++;
            map2[s[j]]++;
        }
        if (map1 == map2) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}
