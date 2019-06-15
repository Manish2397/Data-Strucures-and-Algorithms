#include<bits\stdc++.h>

int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==j or i+j==6) std::cout<<'*';
			else std::cout<<" ";
		}
		std::cout<<'\n';
	}

}