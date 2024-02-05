//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Simple Calculator to perform arthmetic operations

#include<iostream>
using namespace std;
int main(){
	int num1 , num2 ;
	cout << " Enter two  numbers : " << endl ;
	cin >> num1 >> num2 ;
	char operation ;
	cout << " Enter operation to be performed on these numbers : " << endl ;
	cin >> operation ;
	switch(operation){
		case '+':
			cout << " Sum = " << num1 + num2 << endl ;
			break ;
		case '-':
			cout << " subtraction  = " << num1 - num2 << endl ;
			break ;
		case '*':
			cout << " Product = " << num1 * num2 << endl ;
			break ;
		case '/':
			cout << " Division = " << num1 / num2 << endl ;
			break ;
		case '%':
			cout << " Modulus = " << num1 % num2 << endl ;
			break ;
		default:
			cout << " INVALID Operator " << endl ; 
	}
return 0 ;
}
