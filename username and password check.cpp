#include <iostream>
#include <string>

using namespace std;

main()
{
	string username1,username2;
	string password1,password2;
	
	cout<<"Enter user 1: ";
	cin>>username1;
	cout<<"Enter user1 password: ";
	cin>>password1;
	
	cout<<"Enter user 2: ";
	cin>>username2;
	cout<<"Enter user2 password: ";
	cin>>password2;
	
	if(username1=="nikola" && password1=="pass")
	{
		cout<<"Username 1 is correct";
	}
	else
	{
		cout<<"Enter user 1: ";
	cin>>username1;
	cout<<"Enter user1 password: ";
	cin>>password1;
	if(username1=="nikola" && password1=="pass")
	{
		cout<<"Username 1 is correct";
	}
	}
	
	
	
	if(username2=="nikola1" && password2=="pass1")
	{
		cout<<"Username 2 is correct";
	}
	else
	{
		cout<<"Enter user 2: ";
	cin>>username2;
	cout<<"Enter user2 password: ";
	cin>>password2;
	if(username2=="nikola1" && password2=="pass1")
	{
		cout<<"Username 2 is correct";
	}
	}
	

	
	
}
