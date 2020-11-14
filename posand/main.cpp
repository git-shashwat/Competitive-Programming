//https://www.codechef.com/OCT20B/problems/POSAND
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
	permutation p1, p2...pn of {1, 2, ..., N} = beautiful <==> p[i]&p[i+1] is greater than 0 for every 1 <= i < N
	x x x x x x
*/ 

int main() {
    test {
    	int n;
    	cin>>n;
    	int arr[n];
    	if (n!= 1 && !(n&(n-1))) {
    		cout<<"-1\n";
    		continue;
    	}
    	loop0(n)	arr[i] = i+1;
    	stack <int> s1, s2;
    	s1.push(arr[0]);
    	loop(1, n) {
    		if ((s1.top() & arr[i]) > 0) {
    			s1.push(arr[i]);
    			while(!s2.empty() && (s2.top() & s1.top()) > 0) {
    				s1.push(s2.top());
    				s2.pop();
    			}
    		} else {
    			s2.push(arr[i]);
    		}
    	}
    	while(!s1.empty()) {
    		cout<<s1.top()<<" ";
    		s1.pop();
    	}
    	while(!s2.empty()) {
    		cout<<s2.top()<<" ";
    		s2.pop();
    	}
    	cout<<endl;
    }
    return 0;
}
