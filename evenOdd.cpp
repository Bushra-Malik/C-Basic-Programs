//Author: Bushra Shafqat
// Date: February 5, 2024
// Description:check even/odd number
#include<iostream>
using namespace std ;
int main(){
	int number ;
	cout<< " Enter a number : " << endl ;
	cin >> number ;
	if ( number%2==0){	
		cout << number << " is EVEN. "<< endl ; //statements to be executed if condition is true 
	}else{
		cout << number << " is ODD. "<< endl ; //statements to be executed if condition is FALSE 
	}
return 0;
}
