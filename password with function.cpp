#include <iostream>

using namespace std;
string user1,user2;
void check();

main()
{
cout<<"enter user1 password: ";
cin>>user1;
cout<<"enter user2 password: ";
cin>>user2;

check();
	
	
}
void check()
{
	if(user1=="name")
{
cout<<"The password of user1 is correct";cout<<'\n';	
}
else
{
	cout<<"The password of user 1 is not correct";cout<<'\n';
}

//user 2

if(user2=="name2")
{
cout<<"The password of user2 is correct";cout<<'\n';	
}
else
{
	cout<<"The password of user 2 is not correct";cout<<'\n';
}


}
