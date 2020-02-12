#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int n=0;
    char x[99999];
    cout<<"Unesi string: ";
    cin>>x;
    cout<<endl;
    
    for(i;x[i];i++)
    n++;
    for(n;i>-1;i--)
    cout<<x[i];
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
