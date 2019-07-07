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

int minElementQuery(int tree[],int index,int start,int end,int qStart,int qEnd){
	if(qStart>end or qEnd<start) return INT_MAX;
	if(qStart<=start and qEnd>=end) return tree[index];
	
	int mid = (start+end)/2;
	int left = minElementQuery(tree,2*index,start,mid,qStart,qEnd);
	int right = minElementQuery(tree,2*index+1,mid+1,end,qStart,qEnd);
	return min(left,right);
	
}

int main(){
	int values[] = {1,3,2,-2,4,5};
	int size = 6;
	int *segmentTree = new int[4*size+1];
	buildSegmentTree(segmentTree,values,1,0,size-1);
	cout<<"minimum value is : "<<segmentTree[1]<<endl;
	cout<<minElementQuery(segmentTree,1,0,size-1,2,3);
	return 0;
}
