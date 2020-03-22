#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> vk1;
	vk1.push_back(3);
	vk1.push_back(10);
	vk1.push_back(33);
	
	cout<<"Vektori su: ";
	
	for(unsigned int i=0;i<vk1.size();i++) {
		cout<<vk1[i]<< " ";
	}
	
	cout<<endl;
	
	if (vk1.empty()) {
		cout<<"Vektor Vk1 je prazan.";
	}
	else {
		cout<<"Vektor Vk1 nije prazan.";
	}
	
	cout<<endl;
	
	vector<int> vk2;
	vk2.push_back(10);
	
	if (vk1.size()!=vk2.size()) {
		cout<<"Stari vektor NIJE jednak novom vektoru!";
	}
	else {
		cout<<"Stari vektori jednak je novom vektoru!";
	}
	
	cout<<endl;
	
	vk1=vk2;
	
	if(vk1.size()!=vk2.size()) {
		cout<<"Stari vektori NIJE jedan novom vektoru!";
	}
	else {
		cout<<"Stari vektori jednak je novom vektoru!";
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
