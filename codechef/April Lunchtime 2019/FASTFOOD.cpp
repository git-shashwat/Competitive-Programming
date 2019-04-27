//https://www.codechef.com/LTIME71B/problems/FASTFOOD
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
        int n;
        cin>>n;
        long sumA=0,sumB=0,profit=0;
        long sufsumA[n],sufsumB[n];
        int A[n],B[n];
        loop(i,0,n){
            cin>>A[i];
            sumA+=A[i];
        }
        loop(i,0,n){
            cin>>B[i];
            sumB+=B[i];
        }
        sufsumA[0]=sumA;
        sufsumB[0]=sumB;
        loop(i,1,n){
            sufsumA[i]=sufsumA[i-1]-A[i-1];
            sufsumB[i]=sufsumB[i-1]-B[i-1];
        }
        loop(i,0,n){
            if(sufsumB[i]>sufsumA[i]){
                profit+=sufsumB[i];
                break;
            }
            else
                profit+=A[i];
        }
        cout<<profit<<"\n";
    }
    return 0;
}
