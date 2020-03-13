#include <iostream>

using namespace std;

main()
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
	
	return 0;
}
