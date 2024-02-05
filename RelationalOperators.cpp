//Author: Bushra Shafqat
// Date: February 5, 2024
// Description:  Relational operators : (== , != , > , < , >= , <=)
#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout << " Enter two numbers " << endl ;
    cin >> a >> b ;
    if (a>b){
        cout << a << " is greater than " << b << endl ;
    }else if (a<b){
        cout << b << " is greater than " << a << endl ;
    }else if( a==b){    // compairing if both values are equal or not 
        cout << a << " is equal to " << b << endl ;
    }
    return 0;
}