#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


void buildSegmentTree(int tree[],int values[],int index,int start,int end){
	if(start>end) return;
	if(start==end){
		tree[index]=values[start];
	}
	else{
		int mid = (start+end)/2;

		//left subTree
		buildSegmentTree(tree,values,2*index,start,mid);
		//right subTree
		buildSegmentTree(tree,values,2*index+1,mid+1,end);

		tree[index] = min(tree[2*index],tree[2*index+1]);
	}
}

int main(){
	int values[] = {4,7,5,10,-2,6,-14,-8};
	int size = 8;
	int *segmentTree = new int[4*size+1];
	buildSegmentTree(segmentTree,values,1,0,size-1);
	cout<<"minimum value is : "<<segmentTree[1];

	return 0;
}