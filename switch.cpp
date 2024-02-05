//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: switch statement 
// substitute for long if else statement which helps to compare variable to multiple values 
#include<iostream>
using namespace std ;
int main(){
	char button ; 
	cout << " Press a button : " << endl ; 
	cin >> button ;
	switch(button){
		case 'e' : 
			cout << " Hello world! " ; 
			break ;
		case 'c' :
			cout << " Ni hao sh�ji�! " ; 
			break ;
		case 'k' :
			cout << " annyeonghaseyo segye!" ; 
			break ;
		default :
			cout << " Language not available." ;
	}
return 0 ;
}
