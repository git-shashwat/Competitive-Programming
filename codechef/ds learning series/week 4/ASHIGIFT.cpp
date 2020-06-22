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

bool findMin(vector < tuple<ll, ll, ll, ll> >v, ll men) {
	for (int i = 0; i < v.size(); ++i) {
		if (get<1>(v[i]) == 1) {
			men -= get<2>(v[i]);
			if (men <= 0) {
				return false;
			}
		} else {
			if (men >= get<2>(v[i])) {
				men += get<3>(v[i]);
			}
		}
	}
	return true;
}

int main(){
    test {
        ll MAX_ANS = 0;
        vector < tuple<ll, ll, ll, ll> >v;
        map <int, bool> position;
        map <int, ll> sweet;
        map <int, pair<ll, ll>> clan;
        ll X;
        int b, c;
        cin>>X;
        cin>>b;
        int x, p;
       	ll y, q, r;
        loop0(b) {
            cin>>x>>y;
            v.pb(make_tuple(x, 1, y, -50));
            MAX_ANS += y;
        }
        ++MAX_ANS;	//including chef
        cin>>c;
        loop0(c) {
            cin>>p>>q>>r;
            v.pb(make_tuple(p, 2, q, r));
        }
        if (c == 0) {
            cout<<MAX_ANS<<"\n";
        } else {
        	sort(v.begin(), v.end());
            ll ans, low = 1, high = MAX_ANS;
			while (low <= high) {
                ll mid = low + (high-low)/2;
                if (findMin(v, mid)) {
                    ans = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
