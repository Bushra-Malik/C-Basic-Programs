//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Transpose of given matrix
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int array[3][3];
    cout << " Enter elements of matrix : " << endl ;
    for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3 ; j++){
            cin >> array[i][j] ;
        }
    }
    cout << " Your Matrix is : " <<endl;
    for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3 ; j++){
           cout << array[i][j] << " " ;
        }
        cout << endl ;
    }
    cout << " Transpose of Your Matrix is : " <<endl;
    for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3 ; j++){
           swap(array[i][j],array[j][i]);
        //    cout << array[i][j] << " " ;
        }
        cout << endl ;
    }
       for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3 ; j++){
           cout << array[i][j] << " " ;
        }
        cout << endl ;
    }
return 0;
}