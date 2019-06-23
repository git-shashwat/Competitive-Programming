//https://www.codechef.com/COOK107B/problems/EXAM1
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define push_back pb
#define pop_back po

using namespace std;

int main(){
    test{
        int n,cnt = 0;
        cin>>n;
        string s,u;
        bool evaluation[n] = {false};
        cin>>s;
        cin>>u;
        if (n == 1){
            if (s[0] == u[0])     cout<<"1\n";
            else            cout<<"0\n";
        }
        else{
            loop(i,0,n-1){
                if(!evaluation[i]){
                    if (u[i] != s[i] && u[i]!= 'N'){
                        evaluation[i+1] = true;
                    }
                    else if (u[i] == 'N')
                        continue;
                    else 
                        cnt++;
                }
            }
            if(u[n-1] == s[n-1] && !evaluation[n-1])    cnt++;
            cout<<cnt<<"\n";
        }
    }
    return 0;
}
