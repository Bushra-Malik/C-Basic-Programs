//Author: Bushra Shafqat
// Date: February 5, 2024
// Description: User defined Functions 
#include<iostream>
using namespace std ;
void quality(char array[]){
    cout << array << " is cool "<< endl;
}
void MyAge(int age){
    if (age>20){
            cout << " You are an adult "<< endl ;
    }else if (age>10){
        cout << " you are in your teens "<< endl ;
    }else{
        cout << " You kiddo "<< endl ;
    }
}
int Average(int marks1 , int marks2 , int marks3){
    int sum ;
    sum = marks1 + marks2 + marks3 ;
    int avg =sum/3 ;
    return avg ;
}
int main(){
    char name[10];
    cout<< " Enter your name : " << endl ;
    cin >> name ;
    quality(name);
    int age ;
    cout << " Enter your age : " << endl ;
    cin >> age ;
    MyAge(age);
    int english , maths , computer ;
    cout << " Enter your marks in maths test "<< endl ;
    cin >> maths ;
    cout << " Enter your marks in English test "<< endl ;
    cin >> english;
    cout << " Enter your marks in Computer test "<< endl ;
    cin >> computer;
    cout << " Your average marks are "<< Average(maths , english , computer);

return 0 ;
}