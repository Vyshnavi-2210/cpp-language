#include<iostream>
using namespace std;
void greet(string name,string message="Hello"){
	cout<<message<<","<<name<<"!"<<endl;
}
int main(){
	greet("Alice");         //Uses default
	message:"Hello";
	greet("Bob","Good morning");//uses provided message
	return 0;
	
}

