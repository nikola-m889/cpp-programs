#include <iostream>

using namespace std;

main()
{
	enum test{
	jedan,dva,tri};
	int i;
	
	cout<<"option(0-2): ";
	cin>>i;
/*	if(i==jedan)
	{
		cout<<"opcija: jedan";
	}
	else if(i==dva)
	{
		cout<<"opcija: dva";
	}
	else if(i==tri)
	{
		cout<<"opcija: tri";
	}
	else
	{
		cout<<"nepoznata opcija";
	}
	*/
	switch(i)
	{
		case 0:
			cout<<"opcija: jedan"<<endl;
			break;
		case 1:
			cout<<"opcija: dva"<<endl;
			break;
		case 2:
			cout<<"opcija: tri"<<endl;
			break;		
	}
	
	
	
	return 0;
}
