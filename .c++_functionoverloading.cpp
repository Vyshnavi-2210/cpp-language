#include<iostream>
using namespace std;
//Inline functions to add two integers
inline int add(int a,int b){
	return a+b;
}
//overloaded inline function to add two doubles
inline double add(double a,double b){
	return a+b;
}
//overloaded inlinefunction to add three integers
inline int add(int a,int b,int c){
	return a+b+c;
}
int main(){
	cout<<"add(5,10)="<<add(5,10)<<endl;
	cout<<"add(9.3,4.2)="<<add(9.3,4.2)<<endl;
	cout<<"add(9,6,2)="<<add(9,6,2)<<endl;
	return 0;
}
