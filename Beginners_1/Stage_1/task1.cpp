/*
  - Declare three integer variables 'a,' 'b,' and 'c'.
  - Create three integer pointers 'ptrA,' 'ptrB,' and 'ptrC' and assign them the addresses of 'a,' 'b,' and 'c' respectively.
  - Prompt the user to input three integer values, which are stored in 'a,' 'b,' and 'c'.
  - Display the values of 'a,' 'b,' and 'c' using the pointers 'ptrA,' 'ptrB,' and 'ptrC' respectively.
  - Update the values of 'a,' 'b,' and 'c' by setting the values at the memory addresses pointed to by 'ptrA,' 'ptrB,' and 'ptrC' to 30 and 40 and 50 respectively.
  - Display the updated values of 'a,' 'b,' and 'c' using the pointers 'ptrA,' 'ptrB,' and 'ptrC' respectively.
*/

#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	int *ptrA=&a;
	int *ptrB=&b;
	int *ptrC=&c;
	
	cout<<"Enter first number = ";
	cin>>a;
	
	cout<<"Enter second number = ";
	cin>>b;

	cout<<"Enter second number = ";
	cin>>c;
	
	cout<<"the values are = "<<*ptrA<<" & "<<*ptrB<<" & "<<*ptrC<<endl;
	
	*ptrA=30;
	*ptrB=40;
	*ptrC=50;
	
	cout<<"Updated values of *ptrA and *ptrB are = "<<*ptrA<<" & "<<*ptrB<<" & "<<*ptrC;
	
	return 0;
}
