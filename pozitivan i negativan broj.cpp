#include <iostream>

using namespace std;

int main() 
{
	int a;
	cout << "Upisi cijeli broj razlicit od 0: ";
	cin >> a;
	if (a<0)
	{
		cout<<"Broj "<<a<<" je negativan.\
		Njegova apsolutna vrijednost je "<<-a<<endl;
	}
	else
	{
		cout<<"Broj "<<a<<" je pozitivan.\
		Njegova apsolutna vrijednost je "<<a<<endl;
	}
	return 0;
}
