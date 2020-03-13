#include <iostream>

using namespace std;

void bottles(void);
void calculator(void);

main()
{
	int option;
	cout<<"For Bottles of beer song, press 1: ";cout<<'\n';
	cout<<"For Calculator, press 2: ";
	cin>>option;
	if(option==1)
	{
	bottles();
	}
	if(option==2)
	{
	calculator();
	}

	
	
	return 0;
}
void bottles(void)
{
	int i=99;
	
	while(i>0)
	{
		cout<<i<<"Bottles of beer on the wall, "<<i<<"bottles of beer.";
		cout<<'\n';
		i--;
		cout<<"take one down and pass it around, "<<i<<"bottles of beer on the wall.";
		cout<<'\n';
		if(i==0)
		{
			break;
		}
		
	}
	cout<<'\n';
	cout<<"No more bottles of beer on the wall, no more bottles of beer.";
	cout<<'\n'; 
    cout<<"Go to the store and buy some more, 99 bottles of beer on the wall.";
	
}

void calculator(void)
{
	int first,second;
	
	cout<<"Enter the first number: ";
	cin>>first;
	cout<<"Enter the second number: ";
	cin>>second;
	cout<<first<<" + "<<second<<" : "<<first+second;cout<<'\n';
	cout<<first<<" - "<<second<<" : "<<first-second;cout<<'\n';
	cout<<first<<" * "<<second<<" : "<<first*second;cout<<'\n';
	cout<<first<<" / "<<second<<" : "<<first/second;cout<<'\n';
	
}
