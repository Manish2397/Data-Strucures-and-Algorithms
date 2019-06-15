#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct levels{
	long long int index,lev;
};
bool cmp(levels a,levels b){
	return a.lev<b.lev;
}
int main() {
    long long int n,temp,ind=0,l=0,cnt=0;
    cin>>n;
    levels arr[n];
    for(long int i=0;i<n;i++){
    	cin>>temp;
    	arr[i].index=i;
    	arr[i].lev=temp;
    }
    sort(arr,arr+n,cmp);
    for(long long int i=0;i<n;i++){
    	//cout<<arr[i].index;
    	if(ind<=arr[i].index && l<arr[i].lev){

    		ind=arr[i].index;
    		l=arr[i].lev;
    		cnt++;
    	}
    }
    cout<<cnt;
    return 0;
}