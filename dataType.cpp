//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: data types in c++ 
#include<iostream>
using namespace std;
int main(){
	// initialization of variables 
	int integer ;	//4 byte
	short int shortInteger ; // 2 bytes
	long int longInteger ; // 8 bytes 
	char character ;	// 1 byte
	float floatDecimal;	// 4 byte (upto 7 decimal digits)
	bool boolean ;	// 1 byte (T/F)
	double doubleDecimal;	// 8 byte (upto 15 decimal digits)
	// declaration of variables 
	integer = 10 ;
	shortInteger = 3383;
	longInteger = 338474;
	character = 'A';
	floatDecimal = 4.1237804;
	boolean = true; // 0 means false any other number represent true 
	doubleDecimal = 123.178348924791947 ;
	// sizeof() operator to check size of variable 
	cout << " Size of " << integer << " is "<< sizeof(integer) << endl;
	cout << " Size of " << shortInteger << " is "<< sizeof(shortInteger) << endl;
	cout << " Size of " << longInteger << " is "<< sizeof(longInteger) << endl;
	cout << " Size of " << character <<" is "<< sizeof(character)<< endl;
	cout << " Size of " << floatDecimal <<" is "<< sizeof(floatDecimal)<< endl;
	cout << " Size of " << boolean <<" is "<< sizeof(boolean)<< endl;
	cout << " Size of " << doubleDecimal <<" is "<< sizeof(doubleDecimal)<< endl;	
    //	The compiler used in this IDE allowed for 6 digits.
    // So, our variable values were rounded off and truncated to 6 digits by the compiler.
return 0;	
}
