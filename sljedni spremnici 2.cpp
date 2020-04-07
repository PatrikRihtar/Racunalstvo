#include <cstdlib>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() 

{
	vector<int> PR;
	float P;
	int R=0;
	cout<<"Ovo je program koji ispisuje brojeve sve dok ne unesete nulu i ispisuje kapacitet."<<endl;
	cout<<"Unesi neki broj:"<<endl;
	cin>>P;
	cout<<endl;
	while ((P!=0))
	{
		if (P!=int(P))
		{
			cout<<"Unesi ponovno cijeli broj."<<endl;
			cin>>P;
		}
		else
		{
			cout<<"Unesi ponovno dok nebude nula."<<endl;
			PR.push_back(P);
			cin>>P;
		}
 	}
 	PR.push_back(P);
 	cout<<endl;
	cout<<"Vasi brojevi su:"<<endl;
	cout<<endl;
	for (vector<int>::iterator it=PR.begin(); it!=PR.end(); it++)
	{
		cout<<*it<<" ";
		if (PR.size())
		{
			R++;
		}
		
	}
	cout<<"U ovom vektoru ima: "<<R<<" brojeva."<<endl;
	cout<<"Kapacitet ovih brojeva je: "<<PR.capacity()<<" ."<<endl;
	cout<<"Nakon sortiranja, brojevi izgledaju ovako:"<<endl;
	sort (PR.begin(), PR.end());
	for (vector<int>::iterator it=PR.begin(); it!=PR.end(); it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}
