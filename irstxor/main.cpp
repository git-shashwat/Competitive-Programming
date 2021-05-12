//https://www.codechef.com/MARCH21C/problems/IRSTXOR
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test unsigned t; cin>>t; while(t--)
#define loop(a,b) for(unsigned i=a;i<b;++i)
#define loop0(n) for(unsigned i=0;i<n;++i)
#define rloop0(n) for(unsigned i=n;i>=0;--i)
#define rloop(a,b) for(unsigned i=b; i>=a; --i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define vi vector<unsigned>
#define vl vector<ll>
#define mi map<unsigned,unsigned>
#define si set<unsigned>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

/*
	C => unsigned
	pow(2, d) > C
	(A, B) >= 0
	A, B < pow(2, d)
	A ^ B = C
	Find max value of A x B	
	1011
*/

unsigned func(unsigned n, unsigned k)
{
	for (int i = 1; i < k; ++i)
		n ^= (1 << (i-1));
		
	return n;
}

int main(){
    test {
    	unsigned c;
    	cin>>c;
    	unsigned pos = (unsigned)(log2(c)) + 1;
    	unsigned x = pow(2, pos);
    	unsigned a = func(c, pos), b = x/2 - 1;
    	cout<<(a*b)<<endl;
    }
    return 0;
}
