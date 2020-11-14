//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171
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

int main(){
    int t;
    cin>>t;
    loop(1, t+1) {
        int n, prev_max = 0, ans = 0;
        cin>>n;
        int v[n];
        loop0(n) {
            cin>>v[i];
        }
        loop0(n) {
	    bool isLargerThanPrevDays = i == 0 || v[i] > prev_max;
	    bool isLargerThanFollowingDay = i == n-1 || v[i] > v[i+1];
	   if (isLargerThanPrevDays && isLargerThanFollowingDay) {
		ans++;
	    }
	   prev_max = max(prev_max, v[i]);
        }
	cout<<"Case #"<<i<<": "<<ans<<"\n";
    }
    return 0;
}
