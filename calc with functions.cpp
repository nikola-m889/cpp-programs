#include <iostream>                     

using namespace std;

int add(int x,int y);
int sub(int x,int y);
int multi(int x,int y);
int divide(int x,int y);

main()
{
	int number1,number2;
	
	cout<<"Enter the first number: ";
	cin>>number1;
	cout<<"Enter the second number: ";
	cin>>number2;
	
	cout<<number1<<" + "<<number2<<" = "<<add(number1,number2);cout<<'\n';
	cout<<number1<<" - "<<number2<<" = "<<sub(number1,number2);cout<<'\n';
	cout<<number1<<" * "<<number2<<" = "<<multi(number1,number2);cout<<'\n';
	cout<<number1<<" / "<<number2<<" = "<<divide(number1,number2);cout<<'\n';
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int multi(int x,int y)
{
	return x*y;
}
int divide(int x,int y)
{
	return x/y;
}

