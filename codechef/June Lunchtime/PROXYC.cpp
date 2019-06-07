// https://www.codechef.com/JUNE19B/problems/PROXYC
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
        int d, actual_present = 0, proxy = 0, bar = 0, flag = 0;
        cin>>d;
        bar = ceil(0.75*d);
        string s;
        cin>>s;
        actual_present = count(s.begin(),s.end(),'P');
        if(actual_present >= bar)   cout<<"0\n";
        else if(d<=4)   cout<<"-1\n";
        else{
            loop(i,2,d-2){
                if(s[i] =='A' && (s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P')){
                    proxy++;
                    if(actual_present+proxy == bar){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)   cout<<proxy<<"\n";
            if(flag == 0)   cout<<"-1\n";
        }
    }
    return 0;
}
