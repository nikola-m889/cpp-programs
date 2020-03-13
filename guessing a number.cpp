#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Range(int min,int max)
{
	return rand()%(max-min)+min;
}
int main()
{
	int number;
	srand(time(NULL));
	for(int i=0;i<1;i++)
	{
		Range(40,41);
		
		cout<<"Pick a number from 0 to 100: "<<'\n';
		cin>>number;
		if(number==40)
		{
			cout<<"Correct number"<<'\n';
			break;
		}
		if(number>30 && number<40)
		{
			cout<<"A bit lower than correct number"<<'\n';
			break;
		}
		if(number>=0 && number<30)
		{
			cout<<"Much lower than correct number"<<'\n';
			break;
		}
		if(number<50 && number>40)
		{
			cout<<"A bit higher than correct number"<<'\n';
			break;
		}
		if(number>50 && number<100)
		{
			cout<<"Much higher than correct number"<<'\n';
			break;
		}
		else if(number==100)
		{
			cout<<"You pick 100, it must be between 0 and 100"<<'\n';
			break;
		}
		else
		{
			cout<<"Wrong input, out of range"<<'\n';
			break;
		}
	}
}
