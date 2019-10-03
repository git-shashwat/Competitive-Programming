// https://www.codechef.com/problems/ASHIGIFT
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

bool findMin(map <int, bool> position, ull men, map <int, ull> sweet, map <int, pair<ull, ull>> clan) {
    for (auto i: position) {
        if (i.second) {
            men -= sweet[i.first];
        } else {
            if (men >= clan[i.first].first)
                men += clan[i.first].second;
        }
        if (men <= 0)
            return false;
    }
    return true;
}

int main(){
    test {
        ull MAX_ANS = 0;
        map <int, bool> position;
        map <int, ull> sweet;
        map <int, pair<ull, ull>> clan;
        ll X;
        int b, c;
        cin>>X;
        cin>>b;
        int x[b];
        ull y[b];
        loop0(b) {
            cin>>x[i]>>y[i];
            position[x[i]] = true;
            sweet[x[i]] = y[i];
            MAX_ANS += y[i];
        }
        ++MAX_ANS;
        cin>>c;
        int p[c];
        ull q[c], r[c];
        loop0(c) {
            cin>>p[i]>>q[i]>>r[i];
            position[p[i]] = false;
            clan[p[i]] = make_pair(q[i], r[i]);
        }
        if (c == 0) {
            cout<<MAX_ANS<<"\n";
        } else {
            ull ans;
            ull low = 2, high = MAX_ANS;
            while (low <= high) {
                ull mid = low + (high-low)/2;
                if (findMin(position, mid, sweet, clan)) {
                    ans = min(ans, mid);
                    high = mid+1;
                } else {
                    low = mid + 1;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
