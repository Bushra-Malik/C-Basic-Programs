//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: printing prime number between 2 numbers 
#include<iostream>
using namespace std;
int main(){
	int number1 , number2 , i, j;
	cout << "  enter two number : " <<endl ;
	cin >> number1 >> number2 ;
	for(i=number1 ; i<number2 ; i++){
		for( j=2 ; j<=i ; j++){
			if(i%j==0){
				break ; // terminates the loop
			}
			
		}
			if(i==j){
					cout << i << endl ;
		    }	
	}

return 0;
}
