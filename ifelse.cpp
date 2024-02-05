//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: if-else (conitional statement) in c++
#include<iostream>
using namespace std ;
int main(){
	int number ;
	cout<< " Enter a number : " << endl ;
	cin >> number ;
	if ( number>10){	
		cout << number << " is greater."<< endl ;
	}else{
		cout << number << " is small. "<< endl ;
	}
return 0;
}
// sytax of if else statement 
//	if(condition){
//		//statements to be executed if condition is true 
//	}else{
//		//statements to be executed if condition is FALSE
//	}
