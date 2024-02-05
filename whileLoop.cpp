//Author: Bushra Shafqat
// Date: February 5, 2024
// Description:while loop in c++ 
//we need to use increment or decrement statement inside while loop so 
//that the loop variable gets changed on each iteration, and at some point condition returns false. 
#include<iostream>
using namespace std;
int main(){
	int i=0 ;
	while(i<5){
		cout << i+1 << " " ;
		i++;
	}
return 0 ;
}
// sytax of while Loop
//while(condition)
//{
//   statements to be executed when condition is true;
//}
