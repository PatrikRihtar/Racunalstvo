#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string x;
    cout<<"Unesi string: ";
    getline(cin,x);
    cout<<endl;
    
    cout<<"String sadrzi ["<<x.size()<<"] znakova";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
