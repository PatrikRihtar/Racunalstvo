#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string P;
	int x;
	int y=1;
	cout<<"Ovo je program koji preuredjuje recenicu koju vi unesete."<<endl;
	cout<<"Unesite recenicu."<<endl;
	getline (cin,P);
	cout<<"Vasa recenica glasi:"<<endl;
	cout<<endl;
	for (x=0; P[x]!='\0'; x++)
	{
		cout<<P[x];
	}
	cout<<endl;
	cout<<endl;
	cout<<"Ovdje ima: ";
	for (x=0; P[x]!='\0'; x++)
	{
		if (P[x]==' ')
		{
			y++;
		}
	}
	cout<<y<<" rijeci."<<endl;
	cout<<"Preuredjena recenica sa zarezima izgleda;"<<endl;
	cout<<endl;
	for (x=0; P[x]!='\0'; x++)
	{
		if (P[x]==' ')
		{
			P[x]=',';
		}	
	}
	cout<<P<<endl;
	return 0;
}
