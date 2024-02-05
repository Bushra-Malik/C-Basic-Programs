//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Pattern Printing
#include<iostream>
using namespace std ;
int main(){
   int num ;
    cout << " enter number of lines : " << endl ;
    cin >> num ;
    // uper triangle
    for(int i=0 ; i<num ;i++){
        for(int j=num ; j>i ; j--){
            cout << " ";
        }
        for(int k=0; k<((2*i)+1) ; k++){
            cout << "*";
        }
      cout << endl;
    }
    // lower triangle 
    for(int i=num ; i>=0;i--){
        for(int j=num ; j>i ; j--){
            cout << " ";
        }
        for(int k=0; k<((2*i)+1) ; k++){
            cout << "*";
        }
      cout << endl;
    }
return 0 ;
}