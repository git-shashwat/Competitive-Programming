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

int func(int i, int k, vi iron, int low, int high, int minAp, bool atti[], int sheet[], int block[]) {
	if (low <= high) {
		int mid = (low + high) / 2;
		int j = iron[mid];
		int ap = k + 1 - abs(i - j) - abs(sheet[i] - sheet[j]);
		
		if (atti[j] || abs(block[i] - block[j]) != 0 || ap <= 0 ) {
			if (i < j) 
				return func(i, k, iron, low, mid-1, minAp, atti, sheet, block);
			else
				return func(i, k, iron, mid+1, high, minAp, atti, sheet, block);
		}
		
		else {
			minAp = min(minAp, ap);
			int p1 = func(i, k, iron, low, mid-1, minAp, atti, sheet, block);
			int p2 = func(i, k, iron, mid+1, high, minAp, atti, sheet, block);
			
			cout<<i<<" "<<j<<" "<<p1<<" "<<p2<<endl;
			
			if (p1 != -1 && abs(i-p1) < abs(i-j))	return p1;
			else if (p2 != -1 && abs(i-p2) < abs(i-j))	return p2;
			else return j;
		}
	}
	return -1;
}

int main(){
    test {
    	int n, k, ans = 0;
    	map <char, vector<int> > loc;
    	cin>>n>>k;
    	char s[n];
    	int sheet[n], block[n];
    	bool atti[n] = { false };
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
			int pos = func(mag[i], k, iron, 0, iron.size(), INT_MAX, atti, sheet, block);
			if (pos != -1) {
				ans++;
				atti[pos] = true;
			}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}

