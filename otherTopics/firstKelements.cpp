#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;


int main(){
	int arr[] = {10,34,2,3,45,23,75,88,57,12};
	
	int k=3; //first k elements 
	priority_queue<int> pq;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		if(pq.empty()){
			pq.push(arr[i]);
		}
		else if(arr[i]<pq.top() and pq.size()<k){
			pq.push(arr[i]);
		}
		else if(arr[i]<pq.top() and pq.size()==k){
			pq.pop();
			pq.push(arr[i]);
		}
	}
	for(int i = 0;i<k;i++){
		cout<<pq.top()<<endl;
		pq.pop();
	}
	
}