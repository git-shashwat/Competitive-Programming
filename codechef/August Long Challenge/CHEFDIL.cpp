//https://www.codechef.com/AUG19B/problems/CHEFDIL
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    test {
        string s;
        int ans = 0;
        cin>>s;
        int n = s.size();
        std::set<int> activeBits;
        loop0(n){
            if(s[i] == '1')     activeBits.insert(i);
        }
        while(activeBits.size()){
            int start = *activeBits.begin();
            s[start] = 'E';
            ans++;
            activeBits.erase(start);
            if(s[start-1] == '0'){   
                s[start-1] = '1';
                activeBits.insert(start-1);
            }
            if(s[start+1] == '1'){   
                s[start+1] = '0';
                activeBits.erase(start+1);
            }
            else if(s[start+1] == '0'){   
                s[start+1] = '1';
                activeBits.insert(start+1);
            }
        }
        if (ans == n)   cout<<"WIN\n";
        else            cout<<"LOSE\n";
    }
    return 0;
}

