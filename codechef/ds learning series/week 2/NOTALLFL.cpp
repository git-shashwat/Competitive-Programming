//https://www.codechef.com/LRNDSA02/problems/NOTALLFL
#include<bits/stdc++.h>
#include<limits.h>
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
    FastIO
        test {
            int n, k, ans = 0, distinct = 0, R = 0;
            cin>>n>>k;
            std::vector<int> a(n), freq(k + 1, 0);
            loop0(n) {
                cin>>a[i];
            }
            loop0(n) {
                if (freq[a[i]] == 0) {
                    distinct++;
                }
                freq[a[i]]++;
                if (distinct < k && i-R+1 > ans) {
                    ans = i - R + 1;
                }   
                while (distinct == k) {
                    freq[a[R]]--;
                    if (freq[a[R]] ==  0) {
                        distinct--;
                    }
                    R++;
                }
            }
            cout<<ans<<"\n";
        }
    return 0;
}
