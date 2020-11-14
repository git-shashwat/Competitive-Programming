//https://www.codechef.com/NOV20B/problems/RESTORE
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
	a1, a2, ..., an --> b1, b2, ..., bn
	Bi  is the largest index j such that Ai divides Aj
	A=[2,6,5,3,4], it produces B=[5,2,3,4,5]
*/

const int N = 4000005;

void SieveOfEratosthenes(bool prime[]) 
{ 
    for (int p=2; p*p<=N; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=N; i += p) 
                prime[i] = false; 
        } 
    } 
}

int main(){

	bool prime[N+1];
   	memset(prime, true, sizeof(prime));
	SieveOfEratosthenes(prime);
	
    test {
    	int n, cnt = 0;
    	mi pc;
    	cin>>n;
    	ll b[n], a[n];
    	loop0(n) {
    		cin>>b[i];
    	}
       	for (int p=2; p<=N; p++) {
       		if (cnt >= n) break;
       		if (prime[p]) {
       			a[cnt++] = p;
       		}
       	}
       	loop0(n) {
       		if (pc[b[i]])
       			a[i] = pc[b[i]]; 
       		else
       			pc[b[i]] = a[i];
       	}
       	loop0(n) {
       		cout<<a[i]<<" ";
       	}
       	cout<<endl;
    }
    return 0;
}
