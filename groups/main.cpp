//https://www.codechef.com/MARCH21C/problems/GROUPS
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(n) for(int i=0;i<n;++i)
#define rloop0(n) for(int i=n;i>=0;--i)
#define rloop(a,b) for(int i=b; i>=a; --i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define mi map<int,int>
#define si set<int>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

/* 
	N = seats in a row
	S = string with length N
	S[i] = 0 => empty seat
	S[i] = 1 => somebody sitting
*/

int main(){
    test {
    	string s;
    	cin>>s;
    	
    	int ans = 0;
    	
    	loop0(s.length() - 1) {
			if ((s[i] == '1') && (s[i+1] == '0')) {
				ans++;
			}
    	}
    	if (s.back() == '1') ans++;
    	cout<<ans<<endl;
    }
    return 0;
}
