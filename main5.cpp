 

#include<iostream>

using namespace std;

int main()

{

            cout<<"Program racuna srednju ocjenu uspjeha ucenika."<<endl;
            cout<<"Nakon posljednje ocjene unosi se 0."<<endl;
            float b,suma,br;
            suma=0;
            br=0;
           
           {
                 cout<<"Unesi ocjenu: ";
                 cin>>b;
                 if(b==1)
                 {
                        cout<<"Negativan uspjeh."<<endl;
                        goto kraj;
                 }
                 else if(b<0)
                 {
                        cout<<"Pogresan unos."<<endl;
                        goto kraj;
                 }
                 else     
                 {
                        suma=suma+b;
                        br=br+1;
                 }
            }
            while(b>0);
            br=br-1;
            cout<<"Srednja ocjena uspjeha je " <<suma/br<<endl;
       kraj:return 0;

}
