#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://leetcode.com/problems/wiggle-subsequence/
int wiggleMaxLength(vector<int>& nums) {
    if(nums.empty()) return 0;
    if(nums.size()==1) return 1;
    int size = nums.size();
    map<int,int> asc;
    map<int,int> des;
    int ans[size][size];
    int mx = 1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]<nums[j]){
                if(des.count(i)){
                    ans[i][j] = 1 + des[i];
                    mx=max(mx,ans[i][j]);
                }
                else{
                    ans[i][j]=2;
                    mx=max(mx,ans[i][j]);
                }
                asc[j] = max(asc[j],ans[i][j]);
            }
            if(nums[i]>nums[j]){
                if(asc.count(i)){
                    ans[i][j] = 1 + asc[i];
                    mx=max(mx,ans[i][j]);
                }
                else{
                    ans[i][j]=2;
                    mx=max(mx,ans[i][j]);
                }
                des[j] = max(des[j],ans[i][j]);
            }
        }
    }
    return mx;
}

int main(){
	vector<int> arr = {1,17,5,10,13,15,10,5,16,8};
	cout<<wiggleMaxLength(arr)<<endl;
}
