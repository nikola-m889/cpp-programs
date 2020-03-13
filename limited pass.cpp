#include <iostream>
#include <string>


using namespace std;

main()
{
int i=0;
string password;



	
	while(1)
	{
		i++;
		if(i>4)
		{
			cout<<"Out of attempts.";
			break;
		}
	  if(password=="")
		{
		cout<<"Enter your password: ";	
		}
		else if(password=="pass1")
		{
			cout<<"Password is correct ";
			break;
		}
		else
		{
			cout<<"Wrong password, try again: ";
		}
	cin>>password;	
	}
	
	
	


return 0;	
}
