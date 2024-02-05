//Author: Bushra Shafqat
// Date: February 5, 2024
/* Description:  Arithmetic operators 
                Binary operators (+,-,%,/ *)
                unary operators(++,--) */
#include<iostream>
using namespace std ;
int main(){
    int a =10  ;
    cout << " ++a " << ++a << endl ;// pre increment
    cout << " a++" << a++ << endl ; // post increment 
    cout << " --a " << --a << endl ; // pre decrement 
    cout << " a-- " << a-- << endl ; // post decrement
    int i=1 , j=2 , k;
    k= i+j+ i++ + j++ + ++i + ++j ;
    // 1+2+1+2+3+4
    cout << " k " << k << endl ;
    return 0;
}