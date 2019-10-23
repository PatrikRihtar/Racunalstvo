#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	int x;
	int y=0;
	int z;
	int A[10]={4,20,40,60,80,100,150,300};
	for(x=0;x<8;x++)
	{
		if(A[x]>y)
		{
			z=A[x]-y;
			y=y+z;
		}
	}
	cout<<y;
	
system("PAUSE"); 
return 0;
}
