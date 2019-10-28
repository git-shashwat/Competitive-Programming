//https://www.spoj.com/problems/STPAR/
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
    int n;
    cin>>n;
    int order[n+1];
    loop0(n+1) {
        cin>>order[i];
    }
    stack<int> lane; int need = 1;
    bool state = true;
    for (int i = 0; i < n; i++) {
    	while (!lane.empty() && lane.top() == need) {
    		need++;
    		lane.pop();
    	}
    	if (order[i] == need) {
    		need++;
    	} else if (!lane.empty() && lane.top() < order[i]) {
    		state = false;
    		break;
    	} else {
    		lane.push(order[i]);
    	}
    }
    if (state) cout << "yes" << "\n";
    else cout << "no" << "\n";
    return 0;
}
