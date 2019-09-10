#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://leetcode.com/problems/teemo-attacking
int main(){
	vector<int> timeSeries={1,2,5,6,10};
	int duration = 2;
	duration--;
	int sum=0;
	int st = timeSeries[0];
	int end = st+duration;
	if(timeSeries.size()==0){
        return 0;
    }
	for(int i=1;i<timeSeries.size();i++){
		if(timeSeries[i]>end){
			sum+=(end-st+1);
			st=timeSeries[i];
			end=st+duration;
		}
		else{
			end=timeSeries[i]+duration;
		}
	}
	cout<<sum+end-st+1;
}
