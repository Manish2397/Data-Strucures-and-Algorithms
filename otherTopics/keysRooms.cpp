#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://leetcode.com/problems/keys-and-rooms/
class Solution {
public:
    map<int,int> mm;
    void solve(int ind,vector<vector<int>>& rooms){
        for(int x:rooms[ind]){
            if(!mm.count(x)){
            mm[x]=1;
            solve(x,rooms);}
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        mm[0]=1;
        solve(0,rooms);
        if(mm.size()==rooms.size()) return true;
        else return false;
    }
};



int main(){
	
	

	
	
}
