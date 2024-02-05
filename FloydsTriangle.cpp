//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Floyds Triangle Printing : a triangular of natural numbers
#include<iostream>
using namespace std ;
int main(){
    int count = 1;
    for(int i=0 ; i<5 ;i++){
        for(int j=0 ; j<=i ; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
return 0 ;
}