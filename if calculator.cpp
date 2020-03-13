#include <iostream>
#include <string>

using namespace std;

main()
{
int a,b;
string answer;

cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;

cout<<a<<" + "<<b<<" = "<<a+b<<endl;
cout<<a<<" - "<<b<<" = "<<a-b<<endl;
cout<<"Do you want to multiply two numbers? ";
cin>>answer;
if(answer=="yes")
{
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
}

cin.ignore();
cin.get();
}
