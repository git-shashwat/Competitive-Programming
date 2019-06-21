//http://codeforces.com/contest/1185/problem/B
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int n; cin>>n; while(n--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ull unsigned long long
#define pb push_back
#define po pop_back
using namespace std;

int main(){
    test{
        string s,t;
        cin>>s;
        cin>>t;
        if(s.length() > t.length())
            cout<<"NO\n";
        else{
            int i = 0, j= 0, flag =0;
            while(i<s.length() || j<t.length()){
                int c1 = 0, c2 = 0;
                char x = s[i],y = t[j];
                if(x != y){
                    cout<<"NO\n";
                    flag = 1;
                    break;
                }
                while(i<s.length() && s[i] == x){
                    c1++;
                    i++;
                }
                while(j<t.length() && t[j] == y){
                    c2++;
                    j++;
                }
                if(c1 > c2){
                    cout<<"NO\n";
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
            cout<<"YES\n";
        }
        }
    }
    return 0;
}
