//Author: Bushra Shafqat
// Date: February 5, 2024
// Description:jumps(continue &break statements) in loops are used to control the flow of loops on meeting some specified condition
//code: Allie goes out on even days of month and spend 300 rupee when she has pocket money 
//other wise she stays home [hertotal monthyly pocket money is 3000]
#include<iostream>
using namespace std;
int main(){
	int pocketMoney = 3000;
	for(int date=1 ; date<=30 ; date++){
		if(date%2==0){
	 		continue ; // skip to the next iteration of the loop
		}
		if(pocketMoney==0){
			break; // terminates the loop
		}
		cout << " Go out Allie! " << endl ;
		pocketMoney-=300;
	}
return 0 ;
}
