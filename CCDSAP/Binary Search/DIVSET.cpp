//https://www.codechef.com/problems/DIVSET
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
    FastIO
    test {
        int n, k, c, ans = 0;
        cin>>n>>k>>c;
        ull num;
        std::vector<ull> v;
        loop0(n) {
            cin>>num;
            v.pb(num);
        }
        sort(v.begin(), v.end());
        if (v[0]*c > v[v.size() - 1]) {
            k == 1 ? cout<<"1\n" : cout<<"0\n";
        } else {
            while (v.size() >= k) {
                std::vector<int> del;
                del.pb(v[0]);
                int low = 0, high = v.size() - 1;
                while (low <= high && del.size() < k) {
                    int mid = low + (high-low)/2;
                    if (del.back()*c <= v[mid]) {
                        del.pb(v[mid]);
                        auto itr = upper_bound(v.begin(), v.end(), v[mid]);
                        if (itr == v.end()) {
                            low = n;
                        } else {
                            low = itr - v.begin();
                        }
                    } else {
                        low = mid + 1;
                    }
                    cout<<low<<" ";
                }
                if (del.size() == k) {
                    for (auto i: del) {
                        auto itr = find(v.begin(), v.end(), i);
                        v.erase(itr);
                        ans++;
                    }
                }
                else {
                    v.erase(v.begin());
                }
            }
            // cout<<ans<<"\n";
            cout<<"\n";
        }
    }
    return 0;
}
