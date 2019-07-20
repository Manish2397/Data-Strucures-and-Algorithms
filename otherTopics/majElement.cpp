#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;
//https://leetcode.com/problems/majority-element/
class Solution {
public:
    map<int,int> m;
    int majorityElement(vector<int>& nums) {
        int s=nums.size();
        
        for(int x:nums){
            m[x]++;
            if(m[x]>s/2) return x;
        }
        return 0;
    }
};


int main(){
	int *vis = new int[51]{-1};
	for(int i = 0 ;i<50;i++){
            cout<<vis[i];
        }
	return 0;
}
