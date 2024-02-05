//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: 1 Dimensional Array
#include<iostream>
using namespace std ;
int main(){
    int roll[4] , age[4] , marks[4] ;
    char name[4];
    for(int i=0 ; i<4 ; i++){
        cout << " Enter roll number : "<< endl ;
        cin >> roll[i];
        cout << " Enter your age : "<< endl ;
        cin >> age[i];
        cout << " Enter your Marks : "<< endl ;
        cin >> marks[i];
        cout << " Enter your Name : "<< endl ;
        cin >> name[i];
    }
    cout << " Information for " << endl ;
    for(int i=0 ; i<4 ; i++){
        cout << " sr# " << i+1 << endl ;
        cout << " Roll no : " <<  roll[i] << endl ;
        cout << " Age     : " <<  age[i] << endl ;
        cout << " Marks   : " << marks[i] << endl ;
        cout << " Name    : " <<name[i] << endl ;
        cout << " *************      " << endl ;
    }
    cout << " Lets find factorial of any given number : " << endl ;
    int num  , count=1, fact=1;
    cout << " enter a number : " << endl ;
    cin >> num ;
    while (count<=num){
        fact = fact*num ; 
        cout++;
    }
    cout << " factorial of "<< num << "is : " << endl ;
return 0;
}