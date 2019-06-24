#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


class Tree{
	public:
	int vertices;
	list<int> *adjList;

	//Graph Constructor
	Tree(int v){
		vertices =v;
		adjList = new list<int>[vertices];
	}


	//add Edge
	void addEdge(int a,int b){
		adjList[a].push_back(b);
		adjList[b].push_back(a);
		
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


};


int main(){
	
	Tree t(10);
	t.addEdge(0,1);
	t.addEdge(0,2);
	t.addEdge(1,3);
	t.addEdge(1,4);
	t.addEdge(3,5);
	t.addEdge(5,6);
	t.addEdge(4,7);
	t.addEdge(7,8);
	t.addEdge(4,9);
	cout<<"Adjacency List : "<<endl;
	t.printAdjList();
	cout<<endl;
	cout<<"BFS : "<<endl;
	t.bfs(0);
	cout<<endl;
	cout<<"DFS : "<<endl;
	t.dfs(0);
	cout<<endl;
	
	return 0;
	
}