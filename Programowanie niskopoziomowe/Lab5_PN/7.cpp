#include<iostream>
using namespace std;


void znak(string x,int tab[])
{
	int pom,max=0;
	for(int i=0;i<x.length();i++)
	{
		pom=x[i];
		tab[pom]++;
	}
	for(int i=0;i<128;i++)
	{
		if (max<tab[i])
		{
			max=tab[i];
			pom=i;
		}
	}
	cout<<"Najczesciej wystepujacym znakiem jest: "<<char(pom);
}

int main()
{
	int symbol[128];
	for(int i=0;i<128;i++)symbol[i]=0;
	string ciag;
	cout<<"Wprowadz ciag znakow: \n";
	cin>>ciag;
	znak(ciag,symbol);
	return 0;
}
