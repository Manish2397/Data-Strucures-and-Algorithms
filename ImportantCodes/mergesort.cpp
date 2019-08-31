#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

void merge(int arr[],int s,int mid,int e){
	int arr2[100];
	int ind = s;
	int i=s;
	int j=mid+1;

	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
			arr2[ind]=arr[i];
			i++;
		}
		else{
			arr2[ind]=arr[j];
			j++;
		}
		ind++;
	}
	if(i>mid){
		while(j<=e){
			arr2[ind]=arr[j];
			ind++;
			j++;
		}
	}
	else if(j>e){
		while(i<=mid){
			arr2[ind]=arr[i];
			ind++;
			i++;
		}
	}
	for(int i=s;i<=e;i++){
		arr[i]=arr2[i];
	}
}

void mergeSort(int arr[],int s,int e){
	if(s>=e){
		return;
	}
	int mid = (s+e)/2;
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	merge(arr,s,mid,e);
}

int main(){
	int arr[] = {10,34,2,3,45,23,75,88,57,12};
	mergeSort(arr,0,9);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
}
