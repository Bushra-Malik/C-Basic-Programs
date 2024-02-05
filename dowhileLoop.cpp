//Author: Bushra Shafqat
// Date: February 5, 2024
/* Description: synatax of do-while loop
do-while loop will execute the code block once, before checking if the condition is true,
 then it will repeat the loop as long as the condition is true. */
#include<iostream>
using namespace std;
int main(){
	int i=10 ;
	do{
		cout << i+1 << " " ;
		i++;
	}while(i<5);
return 0 ;
}

//do {
//  // code to be executed
//}
//while (condition);
