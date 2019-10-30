#include <iostream>

using namespace std;

int main()
{
	cout<<"Program prebrojava pojavljivanje slova u recenici"<<endl;
	int i,brojo;
	brojo=0;
	char X[]="lara lovi lava";
	for (i=0;X[i]!='\0';i++)
	{
		if (X[i]=='l')
		{
			brojo=brojo+1;
		}
	}
	cout<<endl<<"U znakovnom nizu: "<<endl
	<<"Koliko slova l ima u ovoj recenici?"<<endl<<"ima "<<brojo
	<<" slova l."<<endl;
	return 0;
}
