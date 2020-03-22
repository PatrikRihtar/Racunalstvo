#include <cstdlib>
#include <iostream>
#include <vector> 

using namespace std;

int main() 
{
	int N=1;
	int x=1;
	int p, r;
	vector<int> vk;
	cout<<"Ovo je program koji vam omogucuje unosenje brojeva sve dok ne upisete nulu i ispisuje brojeve koji se ponavljaju."<<endl;
	cout<<"Unesi brojeve jedan po jedan, za kraj unesi nulu."<<endl;
	while(N!=0)
	{
	
		cout<<"Unesi "<<x<<". broj: ";
		cin>>N;
		vk.push_back(N);
		x++;
	
	}
	cout<<endl;
	
	cout << "Ponavljajuci brojevi su: " <<endl;
	for (p=0;  p<vk.size(); p++)
	{
		for (r=p+1;  r<vk.size(); r++)
		{
			if (vk[p]==vk[r])
			{
				cout<<vk[r]<<" ";
				break;
			}
			
		}
	} 
	

	return 0;
}
