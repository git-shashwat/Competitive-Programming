//https://www.codechef.com/problems/STICKS
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
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
        int n;
        cin>>n;
        int a[n], cnt = 0;
        long ans = 1;
        std::map<int, int> mp;
        std::map<int, int>::reverse_iterator it = mp.rbegin();
        loop0(n){
            cin>>a[i];
            mp[a[i]]++;
        }
        if(n < 4)   cout<<"-1\n";
        else{
            for(; it != mp.rend(); ++it){
                if (cnt == 0 && it->second >= 4){
                    ans = pow(it->first,2);
                    cnt = 2;
                    break;
                }
                else if(cnt < 2 && it->second >= 2){
                    ans *= it->first;
                    cnt++;
                }
                else if(cnt == 2)   break;
            }
            if (cnt != 2)   cout<<"-1\n";
            else            cout<<ans<<"\n";
        }
    }
    return 0;
}
