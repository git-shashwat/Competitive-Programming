//https://www.codechef.com/OCT20B/problems/DDIMMST
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
	N points in D-dimensional space
	ith point has D coordinates => [xi1, xi2,...,xiD]
	Weighted Undirected Complete Graph
	Weight of edge b/w points i and j is
	|xi,1−xj,1|+|xi,2−xj,2|+…+|xi,D−xj,D|
	
	Find weight of Maximum Spanning Tree of this graph
	
	Spanning tree of graph G 
		= subset of edges of G
		= that form a tree
		= hit all vertices of G
		
	MST: given graph G = (n, E)
		& edge-weights w: E->R
		find a spanning tree T of min. total weight = Sum(w(e))
		
	Greedy properties:
		1. Optimal substructure: optimal solution to problem incorporates optimal solution to subproblem(s)
		2. greedy choice: eat the largest cookie. locally optimal choices lead to globally optimal solution
		
	*Optimal substructure for MST*
	- Guess an edge e of MST	=> Dynamic approach
	- Contract
	- Recurse
	- Decontract
	- Add e to MST
	
	*Greedy-choice property for MST*
	=> cut & paste argument (Best way to prove greedy algorithm)
	
*/
int minKey(int n, int key[], bool mstSet[]) {
	int min = INT_MAX, min_index;
	
	loop0(n) {
		if (!mstSet[i] && key[i] < min) {
			min = key[i];
			min_index = i;
		}
	}
	return min_index;
}

void getMSTWeight(int n, int parent[],  vector<vector<int>> &graph) {
	int sum = 0; 
    for (int i = 1; i < n; i++) 
        sum += graph[i][parent[i]];
    cout<<-1*sum<<endl; 
}

void primMST (int n, vector<vector<int>> &graph) {
	int parent[n];
	int key[n];
	bool mstSet[n];
	
	loop0(n) {
		key[i] = INT_MAX;
		mstSet[i] = false;
	}
	
	key[0] = 0;
	parent[0] = -1;
	
	loop0(n-1) {
		int u = minKey(n, key, mstSet);
		
		mstSet[u] = true;
		
		loop0(n) {
			if (graph[u][i] && !mstSet[i] && graph[u][i] < key[i]) {
				parent[i] = u, key[i] = graph[u][i];
			}
		}
	}
	getMSTWeight(n, parent, graph);
}

int main(){
    int n, d;
    cin>>n>>d;
    int pos[n][d];
	vector<vector<int>> graph( n , vector<int> (n, 0));
    loop0(n) {
    	for(int j = 0; j < d; ++j) {
    		cin>>pos[i][j];
    	}
    }
    for(int i = 0; i < n; ++i) {
    	for(int j = 0; j < n; ++j) {
    		graph[i][j] = 0;
    		for (int k = 0; k < d; ++k) {
    			graph[i][j] += abs(pos[i][k] - pos[j][k]);
    		}
    		graph[i][j] *= -1;
    	}
    }
    primMST(n, graph);
    return 0;
}
