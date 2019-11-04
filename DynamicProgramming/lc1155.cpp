//https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
class Solution {
public:
    int dpa[35][1005];
    int dp(int d,int f,int target){
        int ans=0;
        int m=1e9+7;
        if(d==0 and target==0){
            
            return 1;
        }
        if(target<0 or d<=0) return 0 ;
        if(dpa[d][target]!=-1) return dpa[d][target];
        for(int i=1;i<=f;i++){
            ans+=dp(d-1,f,target-i);
            ans%=m;
        }
        dpa[d][target]=ans;
        return ans;
    }
    int numRollsToTarget(int d, int f, int target) {
        int ans=0;
        memset(dpa,-1,sizeof(dpa));
        ans=dp(d,f,target);
        return ans;
        
    }
};
