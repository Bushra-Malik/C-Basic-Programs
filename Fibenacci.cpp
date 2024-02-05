//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Febenacci Sequence Printing
#include<iostream>
using namespace std ;
int main(){
    int firstTerm=0, SecondTerm=1 , NextTerm , num ;
    cout << " Enter ending number : "<< endl ;
    cin >> num ;
    for(int i= 1 ; i < num ; i++){
        cout << firstTerm << endl ;
        NextTerm=firstTerm+SecondTerm;
        firstTerm=SecondTerm;
        SecondTerm=NextTerm;
        
    }
return 0;
}