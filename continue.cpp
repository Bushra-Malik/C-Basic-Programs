//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: continue statement example - print numbers from 1 to 100 skipping multiple of 3 
#include<iostream>
using namespace std;
int main(){
	for(int i=1 ; i<=100 ; i++){
		if(i%3==0){
			continue ;
		}
		cout << i << endl ;
	}
return 0;
}
