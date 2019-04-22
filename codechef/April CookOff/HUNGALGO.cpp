//https://www.codechef.com/COOK105B/problems/HUNGALGO
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
        int N,res=1;
        cin>>N;
        int arr[N][N];
        bool flagr[N]={false},flagc[N]={false};
        loop(i,0,N){
            loop(j,0,N)
                cin>>arr[i][j];
        }
        loop(i,0,N){
            loop(j,0,N){
                if(arr[i][j]==0){
                    flagr[i]=true;
                    break;
                }
            }
        }
        loop(i,0,N){
            loop(j,0,N){
                if(arr[j][i]==0){
                    flagc[i]=true;
                    break;
                }
            }
        }
        loop(i,0,N){
            if(flagr[i]==false||flagc[i]==false){
                res=-1;
                break;
            }
        }
        if(res==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
