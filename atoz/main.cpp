//
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

int charToNum (char x) {
	return (int)x - 96;
}

int lower_bound(int arr[], int n, int x) {
	int mid;
	
	int low = 1;
	int high = n;
	
	while (low < high) {
		mid = low + (high - low) / 2;
		if (x <= arr[mid]) {
			high = mid;
		} else {
			low = mid + 1;
		}
	}
	return low;
}

int main(){
    test {
    	int n, q;
    	cin>>n>>q;
    	char str[n];
    	int prefix[27][n+1] = {0}; 
    	loop0(n) {
    		cin>>str[i];
    		int charNum = charToNum(str[i]);
    		for (int j = 1; j <= 26; ++j) {
    			if(j == charNum) {
    				prefix[j][i] = 1 + prefix[j][i-1];
    			} else {
    				prefix[j][i] = prefix[j][i-1];
    			}
    		}
    	}
    	char type, x;
    	int k, ans;
    	while(q--) {
    		cin>>type>>x>>k;
			int charNum = charToNum(x);    		
    		if (type == 'L') {
				ans = lower_bound(prefix[charNum], n, k+1) - 1;
    		}
    		else if (type == 'S') {
				ans = lower_bound(prefix[charNum], n, k);
    		}
    		cout<<ans<<endl;
    	}
    }
    return 0;
}
