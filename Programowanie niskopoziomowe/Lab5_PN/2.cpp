#include<iostream>
using namespace std;

void SS(int tab[], int n)
{
	for (int i = 0; i<n; i++)
	{
		int min = i,pom;
		for (int j = i + 1; j<n; j++)
			if (tab[j]<tab[min])
				min = j;
		pom=tab[min];
		tab[min]=tab[i];
		tab[i]=pom;
	}
}

int main()
{
	int n;
	cout<<"Podaj rozmiar tablicy do posortowania: ";
	cin>>n;
	int *tab=new int[n];
	cout<<"Wprowadz dane do tablicy: ";
	for(int i = 0; i<n;i++)
	{
		cin>>tab[i];
	}
	cout<<"Wprowadzona tablica:\n";
	for(int i = 0; i<n;i++)
	{
		cout<<tab[i]<<"  ";
	}
	cout<<"\nPosortowana tablica:\n";
	SS(tab,n);
	for(int i = 0; i<n;i++)
	{
		cout<<tab[i]<<"  ";
	}
	delete [] tab;
	return 0;
}
