//https://www.codechef.com/APRIL21C/problems/SSCRIPT
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

int main(){
    test {
    	int n, k;
    	cin>>n>>k;
    	char s[n];
    	loop0(n) {
    		cin>>s[i];
    	}
    	int count = 0;
    	string ans = "NO";
    	loop0(n-1) {
    		if (s[i] == '*' && s[i+1] == '*') {
    			if (++(++count) >= k) {
    				ans = "YES";
    				break;
    			}
    		}	
    		else
    			count = 0;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
