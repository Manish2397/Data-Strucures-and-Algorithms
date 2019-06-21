#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


class Graph{
	public:
	int vertices;
	list<int> *adjList;

	//Graph Constructor
	Graph(int v){
		vertices =v;
		adjList = new list<int>[vertices];
	}


	//add Edge
	void addEdge(int a,int b,bool bidirectional=true){
		adjList[a].push_back(b);
		if(bidirectional){
			adjList[b].push_back(a);
		}
	}


	//Print Adjacency List
	void printAdjList(){
		for(int i=0;i<vertices;i++){
			cout<<i<<"-->";
			for(int x:adjList[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}

	//BFS Traversal
	void bfs(int startNode){
		queue<int> q;
		bool *visited = new bool[vertices]{0};
		visited[startNode]=1;
		q.push(startNode);
		while(!q.empty()){
			int parent=q.front();
			cout<<q.front()<<"-->";
			q.pop();
			for(int child:adjList[parent]){
				if(visited[child]==0){
					q.push(child);
					visited[child]=1;
				}
			}
		}
	}


	//DFS Traversal
	void dfs(int startNode,bool visited[]){
		cout<<startNode<<"-->";
		visited[startNode]=1;
		for(int child:adjList[startNode]){
			if(visited[child]==0)
				dfs(child,visited);
		}
	}


	void dfs(int startNode){
		bool *visited=new bool[vertices]{0};
		dfs(startNode,visited);
	}


	//Shortest Path
	void shortestPath(int startNode,int endNode){
		queue<int> q;
		bool *visited = new bool[vertices]{0};
		int *parent = new int[vertices];
		parent[startNode]=-1;
		visited[startNode]=1;
		q.push(startNode);
		while(!q.empty()){
			if(visited[endNode]==1) break;
			int node=q.front();
			q.pop();
			for(int child:adjList[node]){
				if(visited[child]==0){
					parent[child]=node;
					q.push(child);
					visited[child]=1;
				}
			}
		}
		int pos = endNode;
		int distance=-1;
		while(pos!=-1){
			distance++;
			cout<<pos<<"-->";
			pos=parent[pos];
		}
		cout<<endl;
		cout<<"Shortest Distance :  "<<distance<<endl;

	}
};


int main(){
	
	Graph g(9);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(0,3);
	g.addEdge(1,4);
	g.addEdge(5,1,0);
	g.addEdge(2,6);
	g.addEdge(6,5);
	g.addEdge(3,7);
	g.addEdge(3,8);
	cout<<"Adjacency List : "<<endl;
	g.printAdjList();
	cout<<endl;
	cout<<"BFS : "<<endl;
	g.bfs(0);
	cout<<endl;
	cout<<"DFS : "<<endl;
	g.dfs(0);
	cout<<endl;
	cout<<"Shortest Path : "<<endl;
	g.shortestPath(4,6);
	return 0;
	
}