#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


	int randRange(int low,int high)
	{
		return rand() % (high-low)+low;
	}
	
int main()
{
	srand(time(NULL));
	for(int i=0;i<1;i++)
	{
	int result=randRange(0,2);
	if(result==0)
	{
		cout<<"Heads";
	}
	else
	{
		cout<<"Tails";
	}
	
	}
}
//Made by editing and adding new content to "sample code 28.modulus", from Alex Allein.
