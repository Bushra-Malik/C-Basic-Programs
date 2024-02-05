//Author: Bushra Shafqat
// Date: February 5, 2024
/* Description:  Miscellaneous Operators : 
sizeof() : returns the size of variable 
terminal operator : condition?X(true) : Y(false) : returns value of x if condition is true else Y 
type cast : convert one data type into another : datatype(variable)
comma (,) : causes sequence of operations to be performed  
Reference Operator (&) : returns the adresss of the varaiable 
Pointer(*) : pointer to a variable 
*/
#include<iostream>
using namespace std ;
int main(){
    int a=34445;
    cout << " Size of " << a << " = "<< sizeof(a); // size of an integer is 4 bytes 
    cout << " Conitional operator : "<< (a>10 ? "greater" : "smaller")  << endl;
    cout << " Type casting int into char : " << char(a) ;
    a=(2,3,76);// last value will be assigned to a 
    cout << " a value after coma sequence " << a << endl ;
    cout << " Address of a in memory : " << &a << endl ;
    int *ptr = &a;
    cout << " Pointer to a : " << *ptr << endl ; // points to the value stored at adress of a  
    


return 0;
}