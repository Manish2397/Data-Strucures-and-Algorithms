#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1){
            if(flowerbed[0]==0){
                flowerbed[0]=1;
                n--;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 and flowerbed[flowerbed.size()-2]==0 ){
            flowerbed[flowerbed.size()-1]=1;
            n--;
        }
        if(flowerbed[0]==0 and flowerbed[1]==0){
            flowerbed[0]=1;
            n--;
        }
        
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0 and flowerbed[i-1]==0 and flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
                if(n==0){
                    break;
                }
            }
        }
        if(n<=0) return true;
        else return false;
        
    }
};

int main(){
	return 0;
}
