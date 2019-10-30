#include <iostream>
using namespace std;
int main() {
	int a[5]= {10,-5,13,7,-15};
	int i,n=10, zbroj=0;
	for (i=0; i<n; ++i) if(a[i]<0) zbroj+=-a[i];
for (i=0; i<n; ++i) if(a[i]<0) a[i]+=-a[i];
 	cout<< "\nZbroj  svih brojeva niza manjih od 10 iznosi "<<  zbroj;
return 0;
}

