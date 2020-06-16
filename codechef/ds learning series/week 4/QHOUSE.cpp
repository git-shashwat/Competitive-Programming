//https://www.codechef.com/LRNDSA04/problems/QHOUSE
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

int main(){
	// search for square base coordinates
	int l = 0, r = 1000, squareBaseMax = 1000;
	ull ans = 0;
   	while(l <= r) {
   		int mid = (l+r)/2;
   		string res;
   		cout<<"? "<<mid<<" "<<0<<endl;
		cin>>res;
    	if (res == "YES") {
    		//correct query
    		l = mid+1;
    		squareBaseMax = mid;
		} else {
			r = mid-1;
		}
	}
	ans += 4*squareBaseMax*squareBaseMax;
	// search for triangle max coordinates
	l = squareBaseMax+1, r = 1000;
	int  triangleBaseMax = 1000;
	while(l <= r) {
   		int mid = (l+r)/2;
   		string res;
   		cout<<"? "<<mid<<" "<<squareBaseMax*2<<endl;
		cin>>res;
    	if (res == "YES") {
    		//correct query
    		l = mid+1;
    		triangleBaseMax = mid;
		} else {
			r = mid-1;
		}
	}
	// search for height of tiangle
	l = 2*squareBaseMax, r = 1000;
	int  triangleHeightMax = 1000;
		while(l <= r) {
   		int mid = (l+r)/2;
   		string res;
   		cout<<"? "<<0<<" "<<mid<<endl;
		cin>>res;
    	if (res == "YES") {
    		//correct query
    		l = mid+1;
    		triangleHeightMax = mid;
		} else {
			r = mid-1;
		}
	}
	ans += triangleBaseMax*(triangleHeightMax-2*squareBaseMax);
	cout<<"! "<<ans<<endl;
    return 0;
}
