//https://www.codechef.com/LRNDSA05/problems/CHEFPRMS
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

int isSemiPrime(int x) {
	int cnt = 0;
	for (int i = 2; cnt < 2 && i*i <= x; ++i) {
		if (x%i == 0) {
			++cnt;
			x /= i;
			if (x%i == 0)
				return 0;
		}
	}
	if (x > 2)
		++cnt;
	
	return cnt == 2;
}

int main(){
    test {
		int n;
		cin>>n;
		string ans = "NO";
		int i = 1;
		while (i <= n/2) {
			int a = i, b = n - i;
			if (isSemiPrime(a) && isSemiPrime(b)) {
				//cout<<a<<" "<<b<<" ";
				ans = "YES";
				break;
			}
			++i;
		}
		cout<<ans<<endl;
	}
    return 0;
}
