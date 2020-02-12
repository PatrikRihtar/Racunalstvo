#include <cstdlib>
#include <iostream>

using namespace std;

string sastavi(string a, string b, string c) {
       return a+b+c;
}

int main()
{
    string prvi;
    string drugi;
    string treci;
    cout<< "Unesi tri rijeci: (pritisni ENTER nakon unosa svake rijeci.) \n";
    getline(cin,prvi);
    getline(cin,drugi);
    getline(cin,treci);
    cout<< sastavi(prvi,drugi,treci);
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
