//Author: Bushra Shafqat
// Date: February 5, 2024
/* Description:
    Assignment operator : = ( assigns value of right operand to the left opernad),
    += , -= , *=  , /= ( Assigns sum/subtraction/multiplication/division of two operands to left operand)
    */
#include<iostream>
using namespace std ;
int main(){
    int a , b ;
    cout << " enter two numbers : " << endl ;
    cin >> a >> b ;
    cout << " a= " << a << "   b= " << b << endl ;
    a+=b; // a+=b = (a=a+b)
    cout << "  a+=b " << endl ;
    cout << " a= " << a << "   b= " << b << endl ;
    a-=b ; // a-=b = (a=a-b)
    cout << "  a-=b " << endl ;
    cout << " a= " << a << "   b= " << b << endl ;
    a*=b ; // a*=b = (a=a*b)
    cout << "  a*=b " << endl ;
    cout << " a= " << a << "   b= " << b << endl ;
    a/=b ; // a/=b = (a=a/b)
    cout << "  a/=b " << endl ;
    cout << " a= " << a << "   b= " << b << endl ;
    a=b ; // value of a assigned to b so both have equal value now
    cout << "  a=b " << endl ;
    cout << " a= " << a << "   b= " << b << endl ;



return 0 ;
}