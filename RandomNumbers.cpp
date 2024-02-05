//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: Random number generation
#include<iostream>
using namespace std ;
int main() {
    cout << " Any random number : " << rand()<< endl ;
    for( int i=0 ; i<10 ; i++){
        cout << "(rand()%50)   : " << (rand()%50) << endl ; // genarates random number btw 0 and 49
        cout << "(rand()%500)+1   : " << (rand()%500)+1 << endl ; // genarates random number btw 1 and 500

    }
    return 0;
}