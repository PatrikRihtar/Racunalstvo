
#include <cstdlib>
#include <iostream>

using namespace std;

double dijeljenje (double a, double b) {
       double r = a/b;
       return r;
       }
int main()
{
    double a, b;
    cout<<"Unesi brojeve koje zelite dijeliti"<<endl;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;
   double Z=dijeljenje (a,b);
   cout<<a<<" / "<<b<<" = "<<Z;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
