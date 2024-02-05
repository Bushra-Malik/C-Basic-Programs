//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Pattern printing
#include<iostream>
using namespace std ;
int main(){
    int num ;
    cout << " enter number of lines : " << endl ;
    cin >> num ;
    for(int i=0 ; i<num ;i++){
        for(int j=num ; j>i ; j--){
            cout << "   ";
        }
        for(int k=0 ; k<i ; k++){
            cout << " * ";
        }
        cout << endl;
    }
return 0 ;
}