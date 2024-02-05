//Author: Bushra Shafqat
// Date: February 5, 2024
// Description:nested if else statement
//When an if else statement is present inside the body of another �if� or �else� then it's called nested if else.
// find maximum number between three
#include<iostream>
using namespace std ;
int main(){
	int number1 , number2 , number3 ;
	cout<< " Enter 3 numbers : " << endl ;
	cin >> number1  >> number2 >> number3 ;
	cout << " Greatest number is : " ;
	if ( number1 > number2 ){	
		if(number1 > number3){
			cout << number1 ;
		}else{
			cout << number3 ;
		}
	}else if(number3>number2){
		cout << number3;
	}else 
	cout<< number2;
return 0;
}

// syntax 
//if(condition1) {
//    //Nested if else inside the body of "if" , executes when conition1 is true
//    if(condition2) {
      //Statements execute when conition2 is true
//    }
//    else {
       //Statements execute when conition2 is FALSE
//    }
//}
//else {
      //Statements execute when conition1 is false
//}
