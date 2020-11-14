//https://www.codechef.com/AUG20B/problems/SKMP
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define po pop_back

using namespace std;

string getString(char x)
{
    string s(1, x);
    return s;
}

int main(){
    test {
		string s, p;
		cin>>s>>p;
		map <char, int> m;
		vector <string> ruffle;
		loop0(p.size()) {
			++m[p[i]];
		}
		loop0(s.size()) {
			if (--m[s[i]] < 0) {
				ruffle.pb(getString(s[i]));
			}
		}
		ruffle.pb(p);
		sort(all(ruffle));
		loop0(ruffle.size()) {
			cout<<ruffle[i];
		}
		cout<<"\n";
	}
    return 0;
}
