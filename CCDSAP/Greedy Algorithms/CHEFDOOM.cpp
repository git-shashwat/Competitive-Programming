//https://www.codechef.com/problems/CAKEDOOM
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
        short K,flag=1;
        string S;
        cin>>K>>S;
        char memo[10]={'0','1','2','3','4','5','6','7','8','9'};
        short len=S.length();
        if((len==1)&&(S[0]=='?')){
            cout<<"0\n";
            continue;
        }
        else{
            if((S[0]==S[len-1])&&S[0]!='?'){
                cout<<"NO\n";
                continue;
            }
            else{
                loop(i,0,len-1){
                    if(S[i]!='?'&&S[i]==S[i+1]){
                        cout<<"NO\n";
                        flag=0;
                        break;
                    }
                    else if(S[i]=='?'){
                        if(i==0){
                            loop(j,0,K){
                                if((S[i+1]!=memo[j])&&(S[len-1]!=memo[j])){
                                    S[i]=memo[j];
                                    break;
                                }
                            }
                        }
                        else{
                            loop(j,0,K){
                                if((S[i+1]!=memo[j])&&S[i-1]!=memo[j]){
                                    S[i]=memo[j];
                                    flag=1;
                                    break;
                                }
                                flag=0;
                            }
                        }
                    }
                }
                if(S[len-1]=='?'){
                    loop(j,0,K){
                        if((S[0]!=memo[j])&&(S[len-2]!=memo[j])){
                            S[len-1]=memo[j];
                            break;
                        }
                    }
                }
            }
        }
        if(flag)
        cout<<S<<"\n";
       /* else
        cout<<"NO\n";*/
    }
    return 0;
}
