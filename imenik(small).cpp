#include <iostream>

using namespace std;

struct Imenik
{
	int broj;
	string ime;
	string adresa;
};


int main()
{ 
    
	string option;
	Imenik korisnik;
	Imenik korisnik2[2];
	
	cout<<"Enter the name: ";
	cin>>korisnik.ime;
	cout<<"Enter the number: ";
	cin>>korisnik.broj;
	cout<<"Enter the address: ";
	cin>>korisnik.adresa;
	
	cout<<"The name of the user is: "<<korisnik.ime<<'\n';
	cout<<"The number is: "<<korisnik.broj<<'\n';
	cout<<"The address is: "<<korisnik.adresa<<'\n';
	
	cout<<"Do you wish to add a new users(max. 3)?"<<'\n';
	cin>>option;
	if(option=="yes")
	{
		for(int i=0;i<3;i++)
		{
		
		
	cout<<"Enter the name: ";
	cin>>korisnik2[i].ime;
	cout<<"Enter the number: ";
	cin>>korisnik2[i].broj;
	cout<<"Enter the address: ";
	cin>>korisnik2[i].adresa;
}
	for(int i=0;i<3;i++)
	{
	cout<<"User number: "<<i+1<<" : "<<'\n';
	cout<<"The name of the user is: "<<korisnik2[i].ime<<'\n';
	cout<<"The number is: "<<korisnik2[i].broj<<'\n';
	cout<<"The address is: "<<korisnik2[i].adresa<<'\n';
}
	}
	
	
	
}
