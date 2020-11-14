//DFS Implementation
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
const int E = 1e5;

/*
	Recursively traverse graph with backtracking as necessary
	
	**ANALYSIS**
	O(V + E)
	Running for each vertex => O(V)
	DFS-Visit called once per vertex v
	Pay |Adj[v]| => O(E)
	
	**EDGE CLASSIFICATION**
	When visiting an edge following stuff can happen
	1. tree edge: (parent pointer) => Visit a new vertex via edge
	2. forward edge: Moving from node to descendant in tree
	3. backward edge: Moving from node to ancestor in tree
	4. cross edges: Remaining edges (No ancestor/descendant relationship)
	
	**COMPUTING BACKWARD EDGE**
	1. While visting a each node, keep track of nodes that are currently in the recursion stack.
	2. If we visit an edge for which the other element is already in the recursion stack then we have encountered a back edge.	
	
	**CYCLE DETECTION**
	G has a cycle <==> DFS has a back edge
	
	Proof:-
			    tree edge
			a ------------> b
		ancestor            descendant
		         <------------
			     back edge
			     
	**JOB SCHEDULING**
	Given directed acyclic graph, order the vertices so that all edges point from lower order to higher order
	DAG ==> Directed Acyclic Graph
	
	g ----> h     i
	    /^
	  /
	a ----> b ----> c ----> f
	    /^                /^
	  /                 /
	d ----> e ---------
	
	**TOPOLOGICAL SORT**
	1. run DFS
	2. output reverse of finishing times of vertices
	
	Correctness: for any edge e = (u, v)
	v finishes before u finishes
	* => starting point
	
	Case 1: u starts before v
	
		*u ----> v	=> visit v before u finishes
	
	Case 2: v starts before u
	
		u ----> v* => XXX => v finishes before u anyway
*/ 

class Graph {
	int V;
	std::list <int> *adj, *backEdge, *forwardEdge;
	std::stack <int> topo;

	public:
		Graph(int v);	//Constructor to initialize graph with V vertices
		void addEdge(int v, int w);	//Function to add an edge from v to w
		void DFSUtil(int v, bool visited[], bool inStack[]);
		void DFS();	//BFS function for traversal
		void printBackEdges();	//Function to print all backEdges
		void printForwardEdges(); //Function to print all frontEdges
		void printTopologicalSort();	//Function to print topological sort of nodes
};

Graph::Graph(int v) {
	this->V = v;
	adj = new list<int>[V];
	backEdge = new list<int>[V];
	forwardEdge = new list<int>[V];
};

void Graph::addEdge(int v, int w) {
	adj[v].pb(w);
};

void Graph::DFSUtil(int v, bool visited[], bool inStack[]) {

/*
	v = 1
	visited[1] = true;
	inStack[1] = false;
	adj[1] = [2, 4]	//PLAY
	v = 2
	visited[2] = true;
	inStack[2] = false;
	adj[2] = [5]	//PLAY
	v = 5
	visited[5] = true;
	inStack[5] = false;
	adj[5] = [4]	//PLAY
	v = 4
	visited[4] = true;
	inStack[4] = true;
	adj[4] = [2] => backEdge[4] = 2
	inStack[4] = false;
	
*/

	visited[v] = true;
	cout<<"Element: "<<v<<endl;

	std::list<int>::iterator i;

	inStack[v] = true;
	for (i = adj[v].begin(); i != adj[v].end(); ++i) {
		if(!visited[*i])
			DFSUtil(*i, visited, inStack);
		else if (inStack[*i]) {
			backEdge[v].pb(*i);
		}
		else {
			forwardEdge[v].pb(*i);
		}
	}
	inStack[v] = false;
	topo.push(v);
};

void Graph::DFS() {
	bool *visited = new bool[V+1];
	bool *inStack = new bool[V+1];
	
	loop0(V) {
		visited[i] = false;
		inStack[i] = false;
	}
	
	loop0(V) {
		if (!visited[i])
			DFSUtil(i, visited, inStack);
	}
};

void Graph::printBackEdges() {
	loop0(V) {
		cout<<"Element: "<<i<<" "<<"Backward edges to: ";
		std::list<int>::iterator itr;
		for (itr = backEdge[i].begin(); itr != backEdge[i].end(); ++itr) {
			cout<<*itr<<" ";
		}
		cout<<endl;
	}
};

void Graph::printForwardEdges() {
	loop0(V) {
		cout<<"Element: "<<i<<" "<<"Forward edges to: ";
		std::list<int>::iterator itr;
		for (itr = forwardEdge[i].begin(); itr != forwardEdge[i].end(); ++itr) {
			cout<<*itr<<" ";
		}
		cout<<endl;
	}
};

void Graph::printTopologicalSort() {
	cout<<"The topological sort resulted in: ";
	while(!topo.empty()) {
		cout<<topo.top()<<" ";
		topo.pop();
	}
	cout<<endl;
}

int main(){
    Graph g(6); 
    g.addEdge(5, 2); 
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1); 
  
    cout << "Following is Depth First Traversal:\n"; 
    g.DFS(); 
    g.printBackEdges();
    g.printForwardEdges();
    g.printTopologicalSort();
    return 0;
}
