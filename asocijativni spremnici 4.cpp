#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	std::map<int , std::string> ucenici;
	std::map<int, int> ocjene;
	ucenici[1] = "Sebastijan";
	ocjene[1] = 4;
	ucenici[2] = "Tomislav";
	ocjene[2] = 2;
	ucenici[3] = "Petar";
	ocjene[3] = 1;
	ucenici[4] = "Zeldon";
	ocjene[4] = 3;
	ucenici[5] = "Patrik";
	ocjene[5] = 5;
	cout<<"Za kojeg ucenika  zelis znati ocjenu "<<endl;
	cout<<"Opcije su Sebastijan, Tomislav, Petar, Zeldon, Patrik: "<<endl;
	string b;
	here3:
	cin>>b;
	if(b.compare(ucenici[1])==0)
	{
		cout<<ucenici[1]<<" je dobio "<<ocjene[1]<<endl;
	}
	else if(b.compare(ucenici[2])==0)
	{
		cout<<ucenici[2]<<" je dobio "<<ocjene[2]<<endl;
	}
	else if(b.compare(ucenici[3])==0)
	{
		cout<<ucenici[3]<<" je dobio "<<ocjene[3]<<endl;
	}
	else if(b.compare(ucenici[4])==0)
	{
		cout<<ucenici[4]<<" je dobio "<<ocjene[4]<<endl;
	}
	else if(b.compare(ucenici[5])==0)
	{
		cout<<ucenici[5]<<" je dobio "<<ocjene[5]<<endl;
	}
	else
	{
		cout<<"Upisi ime ucenika pravilno: "<<endl;
		goto here3;
	}
	cout<<endl<<"Testiram upise cijelog upisa: "<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<ucenici[i]<<" :: "<<ocjene[i]<<endl;
	}
	here4:
	cout<<endl<<"Za kojeg(jos) ucenika ispravljas ocjenu?(Pazi da napises skroz identicno) "<<endl;
	cout<<"Ako ne zelis ispravljat ocjenu, upisi '0'"<<endl;
	string a;
	here:
	cin>>a;
	if(a.compare(ucenici[1])==0||a.compare(ucenici[2])==0||a.compare(ucenici[3])==0||a.compare(ucenici[4])==0||a.compare(ucenici[5])==0)
	{
		if(a.compare(ucenici[1])==0)
		{
			cout<<"Nova ocjena za "<<ucenici[1]<<" je: "<<endl;
			int aa;
			cin>>aa;
			ocjene.erase(ocjene[1]);
			ocjene.insert(std::pair<int , int>(1, aa));
			
		}
		if(a.compare(ucenici[2])==0)
		{
		
			cout<<"Nova ocjena za "<<ucenici[2]<<" je: "<<endl;
			int bb;
			cin>>bb;
			ocjene.erase(ocjene[2]);
			ocjene.insert(std::pair<int , int>(2, bb));
		}
		if(a.compare(ucenici[3])==0)
		{
			cout<<"Nova ocjena za "<<ucenici[3]<<" je: "<<endl;
			int cc;
			cin>>cc;
			ocjene.erase(ocjene[3]);
			ocjene.insert(std::pair<int , int>(3, cc));
		}
		if(a.compare(ucenici[4])==0)
		{
			cout<<"Nova ocjena za "<<ucenici[4]<<" je: "<<endl;
			int dd;
			cin>>dd;
			ocjene.erase(ocjene[4]);
			ocjene.insert(std::pair<int , int>(4, dd));
		}
		if(a.compare(ucenici[5])==0)
		{
			cout<<"Nova ocjena za "<<ucenici[5]<<" je: "<<endl;
			int ee;
			cin>>ee;
			ocjene.erase(ocjene[5]);
			ocjene.insert(std::pair<int , int>(5, ee));
		}
	}
	else if(a=="0")
	{
		goto here2;
	}
	else
	{
		cout<<"Ne prepoznajem to sto ste upisali, upisite opet "<<endl;
		goto here;		
	}
	here2:
	return 0;	

}
