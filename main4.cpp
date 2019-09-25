#include <cstdlib>
    
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
float manji(float a, float b)
{
    if(a>b){
            return b;
            }
            else{
                 return a;
                 }
}
int main()
{
    float a;
    float b;
    float rezultat;
    cout<<"Unesite 2 broja koja želite dijeliti"<<endl;
    cin>>a;
    cin>>b;
    
    rezultat=manji(a, b);
    cout<<rezultat;
    system ("PAUSE");
}
