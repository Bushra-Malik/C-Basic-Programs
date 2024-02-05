//Author: Bushra Shafqat
// Date: February 5, 2024
/* Description:
    Bitwise Operators operate on bits 
    AND (&) : all 1 then 1 else 0
    OR(|) : at least one 1 else 0 
    XOR(^) : same operands then 0 else 1 
    Ones Compliment (~) : 0 then 1 , 1 then 0 
    left shift Operator (<<) left opernad's binary will shift left by (right operand) times position 
    Right shift Operator (>>) left opernad's binary will shift right by (right operand) times position */

 #include <iostream>
using namespace std ;
int main(){
    int a , b ;
    cout << " enter two numbers : " << endl ;
    cin >> a >> b ;
    // bitwise AND 
    cout << "a = " << a << endl; // a = 5 = 0101
    cout << "b = " << b << endl; // b =6 = 0110
    cout << "a & b = " << (a & b) << endl; // 0101 & 0110 = 0100
    // bitwise OR
    cout << "a = " << a << endl; // a = 5 = 0101
    cout << "b = " << b << endl; // b =6 = 0110
    cout << "a | b = " << (a | b) << endl; // 0101 | 0110 = 0111
    // bitwise XOR
    cout << "a = " << a << endl; // a = 5 = 0101
    cout << "b = " << b << endl; // b =6 = 0110
    cout << "a ^ b = " << (a ^ b) << endl; // 0101 ^ 0110 = 0011
    // bitwise NOT
    cout << "a = " << a << endl; // a = 5 = 0101
    cout << "b = " << b << endl; // b =6 = 0110
    cout << "~a = " << ~a<< endl; // ~0101 =1010
    cout << "~b = " << ~b<< endl; // ~0110=1001
    // bitwise left shift 
    cout << "a = " << a << endl; // a = 4 = 0100
    cout << "b = " << b << endl; // b =1
    cout << "a << b = " << (a << b) << endl; // 0100 << 1 = 1000
     // bitwise right shift 
    cout << "a = " << a << endl; // a = 4 = 0100
    cout << "b = " << b << endl; // b =1
    cout << "a >> b = " << (a >> b) << endl; // 0100 >> 1 = 0010

return 0 ;
}