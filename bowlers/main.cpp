//https://www.codechef.com/COOK122B/problems/BOWLERS
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
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back 

using namespace std;
/*
	N overs (1, 2.... N)
	K players (1, 2, ... N)
	Each bowler may bowl at most L overs in total
	same bowler may not bowl consecutive overs
	print -1 if no valid assignment
	else
		print number of player assigned for that over (N numbers)

	n/k = equally distributable overs
	n%k = remaining overs
	2 4 1
*/
int main(){
    test {
		int  n, k,l;
		cin>>n>>k>>l;
		if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(k*l < n){
            cout<<-1<<endl;
            continue;
        }
        int i=1,current=1;
        vector <int> v;
        bool flag = false;
        while(n>0){
            i = (current+1)%(k+1);
            if(i==0) i=1;
            if(current ==  i){
                flag = true;
                break;
            }
            v.pb(i);
            current = i;
            n--;
        }
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
	}
    return 0;
}
