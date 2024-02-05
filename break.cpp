//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: break statement example  - prime number check 
#include<iostream>
using namespace std;
int main(){
	int number , i;
	cout << "  enter a number : " <<endl ;
	cin >> number ;
	for(i=2 ; i<number ; i++){
		if(number%i==0){
			cout << "NOT PRIME "<< endl ;
			break ; // terminates the loop
		}
	}
	if (i==number){
		cout << " PRIME " << endl ;
	}
return 0;
}
