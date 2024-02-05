//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: recursion example 
#include<iostream>
using namespace std;
class recursion
{
    public:
    //1
        int factorial(int n) {
            if (n == 1) 
            return 1;
            return n * factorial(n-1);
        }
    //2
        int Fibonacci(int num){
            
            if (num<=1) 
       		return 0;
	    	return Fibonacci(num-1) + Fibonacci(num-2);
        }
    //3
        int binarySearch(int array[], int size, int value) {
            int first=0, last=size-1;
            int mid = (first + last)/2;
            if (first > last ) 
                return -1; 
            if (array[mid] == value) 
                return mid;
            else if (array [mid] < value)
                return binarySearch(array, size, value);
            else  // if arrray[mid] is grater than value
                return binarySearch(array, size, value);            
        }

};
int main()
{
        recursion obj;
        int option ,num;
        cout << " 1 : Factorial "<< endl 
            <<  " 2 : Fibonacci "<< endl;
        do{
        cout << " enter your choice : "<< endl ;
        cin >> option;
        switch(option){
            case 1 : 
                cout << " Enter a number to find factorial : "<< endl ;
                cin >> num ;
                cout << " Factorial of " << num << " = " << obj.factorial(num) << endl  ;	
                break;
            case 2:
                cout << " Enter ending number : "<< endl ;
                cin >> num ;
                cout << " Fibonacci series from position 0 till position  " << num << " = " ;
                int i;
                while(i < num) {
                    cout << " " << obj.Fibonacci(num);
                    i++;
                }
            break;
            case 3:
            int size ;
            cout << " Enter Array Size : "<< endl ;
            cin >> size;
            int array[size];
            for(int i=0;i<size ;i++){
                cin >> array[i];
            }
            cout << " Enter value to search "<< endl ;
            cin >> num ;
            cout << obj.binarySearch(array,size,num);
            break;
        }
        }while(option);
	return 0;
}