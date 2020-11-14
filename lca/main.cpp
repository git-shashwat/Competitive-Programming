//LCA IMPLEMENTATION
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

const int N = 1e5 + 5, LOGN = 22;

vector<int> adj[N];
int h[N], p[N][LOGN];

pair<int, int> lca(int u, int v) {	//lca, aggregate from u to lca and lca to v
	
}

void dfs(int u, int prv) {
	h[u] = h[prv] + 1;

	for (auto v: adj[u]) {
		
	}
}

void solve() {
	int n, q, u, v;
	cin>>n>>q;
	for (int i = 1; i <= n; ++i)	cin>>A[i];
	loop(1, n) {
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(1, 0);
	while(q--) {
		cin>>u>>v;
		pair<int, int> x = lca(u, v);
		cout<<x.second<<endl;
	}
}

int main(){
    test {
		solve();
	}
    return 0;
}
