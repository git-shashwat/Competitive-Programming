//Prim's algorithm for MST
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

const int V = 5;

/*
	- maintain priority queue Q on V - S
	  where v.key is min{w(u, v) | u belongs to S}
	- initially Q stores V
	- s.key = 0 for arbitrary start vertex s belongs to V
	- for v belongs to V - {s}; v.key = INFINITY
	- until Q empty:
		- u = Extract-Min (Q)	(=> add u to S)
		- for v belongs to Adj[u]:
			- if v belongs to Q
				& w(u, v) < v.key:
					- v.key = w(u, v)	(decrease key)
					- v.parent = u
	- return {{v, v.parent} | S}
*/

int minKey(int key[], bool mstSet[]) {
	int min = INT_MAX, min_index;
	
	loop0(V) {
		if (!mstSet[i] && key[i] < min) {
			min = key[i];
			min_index = i;
		}
	}
	return min_index;
}

void printMST(int parent[], int graph[V][V]) {
	cout<<"Edge \tWeight\n"; 
    for (int i = 1; i < V; i++) 
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n"; 
}

void primMST (int graph[V][V]) {
	int parent[V];
	int key[V];
	bool mstSet[V];
	
	loop0(V) {
		key[i] = INT_MAX;
		mstSet[i] = false;
	}
	
	key[0] = 0;
	parent[0] = -1;
	
	loop0(V-1) {
		int u = minKey(key, mstSet);
		
		mstSet[u] = true;
		
		loop0(V) {
			if (graph[u][i] && !mstSet[i] && graph[u][i] < key[i]) {
				parent[i] = u, key[i] = graph[u][i];
			}
		}
	}
	printMST(parent, graph);
}

int main(){
    int graph[V][V] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } }; 
                        
    primMST(graph);
    return 0;
}

