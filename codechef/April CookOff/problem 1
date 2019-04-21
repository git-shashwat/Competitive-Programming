//https://www.codechef.com/COOK105B/problems/CFMM
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
        int freq_c=0,freq_o=0,freq_d=0,freq_e=0,freq_f=0,freq_h=0;
        short N;
        cin>>N;
        string S[N];
        loop(i,0,N){
            cin>>S[i];
            freq_c+=count(S[i].begin(),S[i].end(),'c');
            freq_o+=count(S[i].begin(),S[i].end(),'o');
            freq_d+=count(S[i].begin(),S[i].end(),'d');
            freq_e+=count(S[i].begin(),S[i].end(),'e');
            freq_h+=count(S[i].begin(),S[i].end(),'h');
            freq_f+=count(S[i].begin(),S[i].end(),'f');
        }
            freq_c/=2;
            freq_e/=2;
            int arr[6]={freq_c,freq_o,freq_d,freq_e,freq_h,freq_f};
           sort(arr,arr+6);
            cout<<arr[0]<<"\n";
    }
    return 0;
}
