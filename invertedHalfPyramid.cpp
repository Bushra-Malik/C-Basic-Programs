//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Pattern Printing
#include<iostream>
using namespace std ;
int main(){
    for(int i=0 ; i<5 ;i++){
        for(int j=5 ; j>i ; j--){
            cout << " * ";
        }
        cout << endl;
    }
return 0 ;
}