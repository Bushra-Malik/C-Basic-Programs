//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Reverse the given number 
#include<iostream>
using namespace std ;
int main(){
    int num , lastDigit , reverse ,number ;
    cout << " Enter number : " << endl ;
    cin >> num ;
    number = num ;
    while(num>0){
        lastDigit=num%10;
        reverse=reverse*10 + lastDigit ;
        num=num/10;
    }
    cout << " Reverse of number ( "<< number << " ) is " << reverse  << endl ;
return 0;
}