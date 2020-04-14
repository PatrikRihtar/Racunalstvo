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
	ofstream file;
	file.open("F:\\Patrik_program\\mjeseci.txt") ;
	std::map<int , std::string> mjeseci;
	mjeseci[1] = "sijecanj";
	mjeseci[2] = "veljaca";
	mjeseci[3] = "ozujak";
	mjeseci[4] = "travanj";
	mjeseci.erase (mjeseci.begin()); 
	mjeseci.insert(std::pair<int , std::string>(1, "prosinac"));
	file<<mjeseci[1]<<endl<<mjeseci[2]<<endl<<mjeseci[3]<<endl<<mjeseci[4]<<endl<<mjeseci[5];
	for(int i=1;i<mjeseci.size();i++)
	{
		cout<<mjeseci[i]<<" :: "<<i<<endl;
	}
	std::map<int , std::string>::iterator it = mjeseci.find(2);
	std::cout<<"Mjesec "<<it->second<<" je pronaden"<<endl;
	std::map<int , std::string>::iterator it2 = mjeseci.find(4);
	std::cout<<"Mjesec "<<it2->second<<" je pronaden"<<endl;	
	file.close();
	system("PAUSE");
	return 0;
}
