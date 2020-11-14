//https://codeforces.com/contest/1433/problem/C
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

/*
	n piranhas
	size: a1, a2, ..., an
	Dominant piranha ==> eat all other except itself
	one move => one kill
	one eat => ai = ai + 1
*/

bool areSame(vector<ll> a,int n) 
{ 
    unordered_map<ll,int> m;//hash map to store the frequency od every 
                             //element 
      
    for(int i=0;i<n;i++) 
       m[a[i]]++; 
       
    if(m.size()==1) 
       return true; 
    else 
       return false; 
}

int main(){
    test {
    	int n;
    	cin>>n;
    	vector<ll> a(n);
    	loop0(n)	cin>>a[i];
    	if(areSame(a, n)) {
    		cout<<"-1\n";
    	} else {
			ll dominant = max_element(all(a));
			loop0(n) {
					if (i == 0 && a[i+1] < a[i]) {
						dominant = i + 1;
					}
					else if (i == n && a[i] > a[i-1]) {
						dominant = i + 1;
					}
					else if ((a[i] > a[i-1] || a[i] > a[i+1])) {
						dominant = i + 1;
					}
			}
			cout<<dominant<<"\n";
    	}
    }
    return 0;
}
