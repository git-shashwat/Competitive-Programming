//https://www.codechef.com/problems/CLETAB
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
        int count=1;
        short N, M;
        cin>>N>>M;
        short meal[M];
        vector <short> C;
        loop(i,0,M){
            cin>>meal[i];
            if(!binary_search(C.begin(),C.end(),meal[i]))   C.push_back(meal[i]);
        }
        if(N>=C.size())     cout<<C.size()<<"\n";
        else{
            loop(i,0,M){
                
            }
        }
    }
    return 0;
}
