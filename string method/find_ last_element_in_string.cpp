#include <iostream>
using namespace std;
int main(){
	
	string myString = "Hello";
	cout << myString[myString.length() - 1]<<endl;
	
	//	we can also use at()
	cout << myString.at(myString.length() - 1);
}
