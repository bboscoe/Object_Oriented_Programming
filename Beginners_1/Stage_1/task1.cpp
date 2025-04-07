/*
  - Declare two integer variables 'a' and 'b'.
  - Create two integer pointers 'ptrA' and 'ptrB' and assign them the addresses of 'a' and 'b' respectively.
  - Prompt the user to input two integer values, which are stored in 'a' and 'b'.
  - Display the values of 'a' and 'b' using the pointers 'ptrA' and 'ptrB' respectively.
  - Update the values of 'a' and 'b' by setting the values at the memory addresses pointed to by 'ptrA' and 'ptrB' to 30 and 40 respectively.
  - Display the updated values of 'a' and 'b' using the pointers 'ptrA' and 'ptrB' respectively.
*/
#include <iostream>

int main(){
	int a,b;
	int *ptrA=&a;
	int *ptrB=&b;
	
	std::cout<<"Enter first number = ";
	std::cin>>a;
	
	std::cout<<"Enter second number = ";
	std::cin>>b;
	
	std::cout<<"the values are = "<<*ptrA<<" & "<<*ptrB<<std::endl;
	
	*ptrA=30;
	*ptrB=40;
	
	std::cout<<"Updated values of *ptrA and *ptrB are = "<<*ptrA<<" & "<<*ptrB;
	
	return 0;
}
