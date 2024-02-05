//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Armstrong Number
#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int num ,sum=0 , lastDigit , number;
    cout << "Enter a number : "<< endl ;
    cin>> num ;
    number = num ;
    while(num>0){
        lastDigit=num%10;
        sum=sum + pow(lastDigit,3);
        num=num/10;
    }
    if(sum==number)
        cout << number << " is an Armstrong Number! " << endl ;
    else 
        cout << number << " is NOT an Armstrong Number! " << endl ;
return 0;
}