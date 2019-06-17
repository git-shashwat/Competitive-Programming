//https://www.codechef.com/problems/TADELIVE
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
        string s;
        cin>>s;
        int n = s.length();
        if(s.length()>=4){
            for(int i=n-1;i>=0;){
                if (s[i] == 'C' && (s[i+1] == 'H' || s[i+1] == '?') && (s[i+2] == 'E' || s[i+2] == '?') && (s[i+3] == 'F' || s[i+3] == '?')){
                    s[i+1] = 'H';
                    s[i+2] = 'E';
                    s[i+3] = 'F';
                    i-=1;
                }
                else if (s[i] == 'H' && (s[i-1] == 'C' || s[i-1] == '?') && (s[i+1] == 'E' || s[i+1] == '?') && (s[i+2] == 'F' || s[i+2] == '?')){
                    s[i-1] = 'C';
                    s[i+1] = 'E';
                    s[i+2] = 'F';
                    i-=2;
                }
                else if (s[i] == 'E' && (s[i-2] == 'C' || s[i-2] == '?') && (s[i-1] == 'H' || s[i-1] == '?') && (s[i+1] == 'F' || s[i+1] == '?')){
                    s[i-2] = 'C';
                    s[i-1] = 'H';
                    s[i+1] = 'F';
                    i-=3;
                }
                else if (s[i] == 'F' && (s[i-3] == 'C' || s[i-3] == '?') && (s[i-2] == 'H' || s[i-2] == '?') && (s[i-1] == 'E' || s[i-1] == '?')){
                    s[i-3] = 'C';
                    s[i-2] = 'H';
                    s[i-1] = 'E';
                    i-=4;
                }
                else if (s[i] == '?' && s[i-1] == '?' && s[i-2] == '?' && s[i-3] == '?'){
                    s[i] = 'F';
                    s[i-1] = 'E';
                    s[i-2] = 'H';
                    s[i-3] = 'C';
                    i-=4;
                }
                else
                    i-=1;              
                }
        }
        loop(i,0,s.length()){
            if (s[i] == '?')    s[i] = 'A';
        }
        cout<<s<<"\n";
    }
    return 0;
}

