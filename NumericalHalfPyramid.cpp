//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Pattern Printing
#include<iostream>
using namespace std;
int main(){
    for(int i=0 ; i<5 ;i++){
        for(int j=5 ; j>i ; j--){
            cout << i+1 << " ";
        }
        cout << endl;
    }
      for(int i=4 ; i>0 ;i--){
        for(int j=5 ; j>=i ; j--){
            cout << i << " ";
        }
        cout << endl;
    }
return 0 ;
}