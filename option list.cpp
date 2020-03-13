#include <iostream>

using namespace std;

main()
{
	int i,option;
	
	do
	{
		cout<<"Choose one of the options: ";cout<<'\n';
		cout<<"Option 1: press 1";cout<<'\n';
		cout<<"Option 2: press 2";cout<<'\n';
		cout<<"Option 3: press 3";cout<<'\n';
		
		cin>>option;
		if(option==1)
		{
			cout<<"You chose option 1";
		}
		else if(option==2)
		{
			cout<<"You chose option 2";
		}
		else{
			cout<<"You chose option 3";
		}
	}while(option!=1 && option!=2 && option!=3);
	
}
