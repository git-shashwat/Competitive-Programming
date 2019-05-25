//https://www.codechef.com/LTIME72B/problems/CV
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
using namespace std;

bool isvowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')  return true;
    return false;
}
int main(){
    test{
        int n,ans=0;
        cin>>n;
        char str[n];
        cin>>str;
        loop(i,0,n-1){
            if(isvowel(str[i])==false&&isvowel(str[i+1])==true){
                ans++;
                i++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
