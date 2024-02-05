//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Finding Factorial of given number
#include<iostream>
using namespace std;
int main(){
    int num , fact=1 ;
    cout << " Enter a number : "  << endl ;
    cin >> num ;
    for ( int i=1 ; i<=num ; i++){
        fact*=i;
    }
    cout << "Factorial of " << num << " is " << fact << endl ;
return 0 ;
}