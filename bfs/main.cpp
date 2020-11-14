//BFS Implementation
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
	LCA but IQ is 900
	This time we'll store not just the parent but the 2^ith parent as well (p[u][i])
	evaluate the difference in heights of the two nodes and break it down in powers of 2

	For 6 & 11 ==> diff = 3 ==> 2^1 + 2^0
	Then approach in powers of 2 using p[u][i]
*/

class Graph {
	int V;
	std::list <int> *adj;
	int *level, *parent;

	public:
		Graph(int v);	//Constructor to initialize graph with V vertices
		void addEdge(int v, int w);	//Function to add an edge from v to w
		void BFS(int v);	//BFS function for traversal
		void LCA(int v, int w);
};

Graph::Graph(int v) {
	this->V = v;
	adj = new list<int>[V];
	level = new int[V];
	parent = new int[V];
};

void Graph::addEdge(int v, int w) {
	adj[v].pb(w);
};

void Graph::BFS(int s) {
	loop0(V) {
		level[i] = -1;	//Seting all nodes as unvisited
		parent[i] = -1;
	}
	std::queue <int> q;
	q.push(s);
	level[s] = 0;

	std::list<int>::iterator i;

	int cnt = 0;
	while(!q.empty()) {
		s = q.front();
		cout<<"Element: "<<s<<" Level: "<<level[s]<<" Parent: "<<parent[s]<<endl;;
		q.pop();

		for(i = adj[s].begin(); i != adj[s].end(); ++i) {
			if(level[*i] == -1) {
				level[*i] = level[s] + 1;
				parent[*i] = s;
				q.push(*i);
			}
		}
	}
};

void Graph::LCA(int v, int w) {
	int vt = v, wt = w;
	while(vt != wt) {
		level[vt] >= level[wt] ? vt = parent[vt] : wt = parent[wt];
	}
	cout<<"LCA of "<<v<<" and "<<w<<" is: "<<vt<<endl;
};

int main(){
	Graph g(12);
	g.addEdge(1, 2);
    	g.addEdge(1, 3);
        g.addEdge(3, 4);
    	g.addEdge(3, 5);
    	g.addEdge(4, 6);
    	g.addEdge(4, 7);
    	g.addEdge(7, 8);
    	g.addEdge(7, 9);
    	g.addEdge(9, 10);
    	g.addEdge(10, 11);

	g.BFS(1);
	g.LCA(6, 11);
    return 0;
}
