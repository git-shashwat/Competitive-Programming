//https://www.codechef.com/JUNE20B/problems/CHFICRM
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
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
        std::vector<int> a(n);
        std::map<int, int> changes;
        bool canServeAll = true;
        loop0(n) {
            cin>>a[i];
        }
        loop0(n) {
            if (a[i] == 5) {
                ++changes[5];
            } else {
                if (a[i] == 10 && changes[5] >= 1) {
                    ++changes[10];
                    --changes[5];
                } else if (a[i] == 15 && (changes[10] >= 1 || changes[5] >= 2)) {
                    ++changes[15];
                    if (changes[10] >= 1) {
                        --changes[10];
                    } else {
                        changes[5] -= 2;
                    }
                }
                else {
                    canServeAll = false;
                }
            }
        }
        canServeAll ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}
