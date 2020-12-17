//http://codeforces.com/contest/1462/problem/B
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
    	int n;
    	cin>>n;
    	char s[n];
    	string ans = "NO";
    	loop0(n) {
    		cin>>s[i];
    	}
    	loop0(n-3) {
    	    		//CASE 4: 2020
if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '0') {
					if(i == 0 || i+4 == n)
						ans = "YES";
    		}
    		//CASE 1: 2...020
    		else if (s[i] == '2' && s[i+1] != '0') {
    			for (int j = i+1; j < n-2; ++j) {
    				if (s[j] == '0' && s[j+1] == '2' && s[j+2] == '0') {
						if(i == 0 && j+3 == n)
							ans = "YES";
    				}
    			}
    		}
    		//CASE 2: 20...20
    		else if (s[i] == '2' && s[i+1] == '0') {
    			for (int j = i+2; j < n-1; ++j) {
    				if (s[j] == '2' && s[j+1] == '0') {
						if(i == 0 && j+2 == n)
							ans = "YES";
    				}
    			}
    		}
    		//CASE 3: 202...0
    		else if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2') {
    			for (int j = i+3; j < n; ++j) {
    				if (s[j] == '0') {
						if(i == 0 && j+1 == n)
							ans = "YES";
    				}
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
