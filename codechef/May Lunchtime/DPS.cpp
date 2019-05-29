//https://www.codechef.com/LTIME72B/problems/DPS
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
#define max_size 100000
using namespace std;

/*Function to calculate the ans*/
int occurance(map <char,int> mp){
    int cnt=0;
    for(auto i:mp){
        if(i.second&1)   cnt++;
    }
    return cnt;
}
int main(){
    test{
        string S;
        cin>>S;
        int length=S.length();
        long ans;
        map <char,int> letter_frequency;
        loop(i,0,length)
            letter_frequency[S[i]]++;
        ans=occurance(letter_frequency);
        if(length&1){
                if(ans<=3)      cout<<"DPS\n";
                else    cout<<"!DPS\n";
        }
        else{
                if(ans==2)  cout<<"DPS\n";
                else    cout<<"!DPS\n";
        }
    }
    return 0;
}
