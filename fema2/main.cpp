//https://www.codechef.com/NOV20B/problems/FEMA2
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
    	int n, k, ans = 0;
    	map <char, vector<int> > loc;
    	mi atti;
    	cin>>n>>k;
    	char s[n];
    	int sheet[n], block[n];
    	loop0(n) {
    		cin>>s[i];
    		loc[s[i]].pb(i);
    	}
    	
    	sheet[0] = s[0] == ':';
    	block[0] = s[0] == 'X';
    	loop(1, n) {
    		sheet[i] = sheet[i-1] + (s[i] == ':');
    		block[i] = block[i-1] + (s[i] == 'X');
    	}
    	
    	auto mag = loc['M'], iron = loc['I'];
    	loop0(mag.size()) {
   	    	int low = 0, high = iron.size() - 1, minAp = INT_MAX, ironIndex = -1;
			while (low <= high) {
				int mid = (low + high) / 2;
				int ap = k + 1 - abs(mag[i] - iron[mid]) - abs(sheet[mag[i]] - sheet[iron[mid]]);
				
				if (!atti[iron[mid]] && abs(block[mag[i]] - block[iron[mid]]) == 0 && ap > 0 ) {
					if (ap > minAp) {
						break;
					}
					minAp = ap;
					ironIndex = iron[mid];
									
					if (mag[i] > iron[mid]) {
						high = mid - 1;
					} else {
						low = mid + 1;
					}
				}
				
				if (mag[i] < iron[mid]) {
					high = mid - 1;
				} else {
					low = mid + 1;
				}
			}
			if (ironIndex != -1) {
				cout<<ironIndex<<" "<<minAp<<endl;
				atti[ironIndex] = 1;
				ans++;
			}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}



