//https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/

#define MIN -1e4-5
class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int ans=MIN;
        int sz  = arr.size();
        if(sz==1) return arr[0];
        int pre[sz+2];
        int suf[sz+2];
        pre[0]=MIN;
        pre[sz+1]=MIN;
        suf[0]=MIN;
        suf[sz+1]=MIN;
        for(int i=1;i<=sz;i++){
            pre[i]=max(pre[i-1]+arr[i-1],arr[i-1]);
        }
        for(int i=sz;i>=1;i--){
            suf[i]=max(suf[i+1]+arr[i-1],arr[i-1]);
        }
        for(int i=1;i<=sz;i++){
            ans=max(max(pre[i-1],ans),max(suf[i+1],pre[i-1]+suf[i+1]));
        }
        return ans;
    }
};