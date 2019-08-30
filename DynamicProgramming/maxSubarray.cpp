#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int *arr = new int[nums.size()];
        int ans = nums[0];
        arr[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            arr[i]=max(nums[i],nums[i]+arr[i-1]);
            ans = max(ans,arr[i]);
        }
        return ans;
    }
};
int main(){
	
	
}
