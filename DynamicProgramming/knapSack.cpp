#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;
int weight[]={1,3,4,5,'\0'};
int value[]={1,4,5,7,'\0'};

int knapSack(int n, int sack) 
{ 
   int i, w; 
   int K[n+1][sack+1]; 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= sack; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (weight[i-1] <= w) 
                 K[i][w] = max(value[i-1] + K[i-1][w-weight[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][sack]; 
} 

int main(){

	int dp[9]={0};
	int sack=7;
	cout<<"weights:"<<endl;
	cout<<"1 3 4 5"<<endl;
	cout<<"values:"<<endl;
	cout<<"1 4 5 7"<<endl;
	cout<<"sack size"<<": "<<7<<endl;
	int n = sizeof(value)/sizeof(value[0]);
	int ans=knapSack(n,sack);
	cout<<ans;

	
}
