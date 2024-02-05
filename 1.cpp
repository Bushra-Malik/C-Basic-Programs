//Author: Bushra Shafqat
// Date: February 5, 2024
// Description:Find and print the summation of the main diagonal of a matrix of size 10x10
//of type integer.
#include<iostream>
using namespace std;
int main(){
	int array[3][3] , sum =0 ;
	
	cout <<" Enter elemnts of an array : " << endl;
	for(int i=0 ; i <3 ; i++){
		for(int j=0 ; j<3 ; j++){
			cin>> array[i][j];
		}
	}
	for(int i=0 ; i <3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(i==j){
				sum+=array[i][j];
			}
		}
	}
	cout << " Sum of main diagonal of a matrix of size 10 x10 = "<< sum <<endl ;
	cout << " Array " << *array[0];
return 0;
}
