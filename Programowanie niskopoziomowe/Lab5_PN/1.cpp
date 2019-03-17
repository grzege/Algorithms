#include<iostream>
using namespace std;

void QS(int tab[], int i, int j)//i - lewy wskaznik, j - prawy wskaŸnik;
{
	int lewy = i--, prawy = j++;
	int piwot = tab[(i+j)/2],tym;
	while (j >= i)
	{
		while (tab[++i] < piwot);
		while (tab[--j] > piwot);
		if (j >= i)
		{
			tym = tab[i];
			tab[i] = tab[j];
			tab[j] = tym;
		}
	}
	if(lewy<j)QS(tab, lewy, j);
	if(prawy>i)QS(tab, i, prawy);
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
	QS(tab,0,n-1);
	for(int i = 0; i<n;i++)
	{
		cout<<tab[i]<<"  ";
	}
	delete [] tab;
	return 0;
}
