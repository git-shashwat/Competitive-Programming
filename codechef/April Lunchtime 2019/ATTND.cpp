//https://www.codechef.com/LTIME71B/problems/ATTND
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
using namespace std;

int main(){
    test{
        int N;
        cin>>N;
        bool flag[N]={false};
        string s1[N],s2[N];
        loop(i,0,N)
            cin>>s1[i]>>s2[i];
        loop(i,0,N){
            if(flag[i]==false){
            loop(j,i+1,N){
                if(s1[i]==s1[j]){
                    flag[i]=true;
                    flag[j]=true;
                }
            }
        }
    }
        loop(i,0,N){
            if(flag[i])
                cout<<s1[i]<<" "<<s2[i]<<"\n";
            else
                cout<<s1[i]<<"\n";
        }
    }
    return 0;
}
