#include<bits/stdc++.h>
using namespace std;
int main()
{
	float  n1,n2,n3;
	float promedio;
	cout<<"ingrese la nota 1: "<<endl;
	cin>>n1;
	cout<<"ingrese la nota 2: "<<endl;
	cin>>n2;
	cout<<"ingrese la nota 3: "<<endl;
	cin>>n3;
	promedio=(n1+n2+n3)/3;
	cout<<"el promedio es: "<<promedio<<endl<<endl;
	if(promedio	>=70)
	{
		cout<<"el alumno aprueba "<<endl;
		
	}
	else
	{
		cout<<"el alumno desaprueba "<<endl;
	}
	return 0;
}
