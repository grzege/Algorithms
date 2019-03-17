#include<iostream>
#include<math.h>
using namespace std;

bool czysqrt(int x)
{
	for(int i=1;i<x;i++)
	{
		if((i*i)==x)return 1;
		if ((i*i)>x) return 0;
	}
	return 0;
}

void pitagor(int D,int G)
{
	for(int i=D;i<=G;i++)
	{
		for(int j=D;j<=G;j++)
		{
			int pom=(i*i)+(j*j);
			if(czysqrt(pom))
			{
				cout<<i<<"^2 + "<<j<<"^2 = "<<pow(pom,0.5)<<"^2\n";
				cout<<"a = "<<i<<" i b = "<<j<<endl<<endl;
			}
		}
	}
}

int main()
{
	int D,G;
	cout<<"Podaj dwie liczby D i G tak, ze <D,G> przedzialem poszukiwan liczb pitagorejskich: ";
	cin>>D>>G;
	pitagor(D,G);
	return 0;
}
