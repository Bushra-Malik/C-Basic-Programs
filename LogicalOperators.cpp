//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Logical operators: AND (&&) , OR(||) , NOT(!)*/
#include<iostream>
using namespace std;
int main(){
    // any non zero number means true , only zero means false
    if (10 && 0){   // both conditions must be true for AND
        cout << " Done " << endl ;
    }else if (0 || 0){ // at least one condition must be true for OR
        cout << " Done 2 " << endl ;
    }else if (!0){  // not of true is false 
        cout << " Done 3" << endl ;
    }
return 0 ;
}