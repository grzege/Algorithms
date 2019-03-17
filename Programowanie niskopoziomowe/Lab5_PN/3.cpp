#include<iostream>
using namespace std;

void BS(int tab[], const int n)
{
	int tym;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (tab[j] < tab[j-1])
			{
				tym=tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tym;
			}
		}
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
	BS(tab,n);
	for(int i = 0; i<n;i++)
	{
		cout<<tab[i]<<"  ";
	}
	delete [] tab;
	return 0;
}
