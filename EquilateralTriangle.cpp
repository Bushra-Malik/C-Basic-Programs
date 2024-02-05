//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Pattern Printing
#include<iostream>
using namespace std ;
int main(){
    int num ;
    cout << " enter number of lines : " << endl ;
    cin >> num ;
    for(int i=0 ; i<num ;i++){
        for(int j=num ; j>i ; j--){
            cout << " ";
        }
        for(int k=0; k<((2*i)+1) ; k++){
            cout << "*";
        }
        // for(int k = 0 ; k<=i ; k++){
        //     cout << "*";
        // }
        // for(int l=0 ; l<i ;l++){
        //     cout <<"*";
        // }
        cout << endl;
    }
return 0 ;
}