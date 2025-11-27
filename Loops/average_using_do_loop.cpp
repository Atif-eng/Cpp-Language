#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	float average;
	char again;
	
	
	do{
		cout<<"Enter three numbers:"<<endl;
	    cin>>a>>b>>c;
	    
		average=(a+b+c)/3.0;
		cout<<"Average:"<<average<<endl;
		cout<<"Do you want to average another set(yes/No):";
		cin>>again;
	
	} while(again =='yes');
	
	return 0;
}
