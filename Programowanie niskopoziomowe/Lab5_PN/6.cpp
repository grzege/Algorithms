#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n,m,k,l,u,v,pod=0,nad=0;//n-liczba wierszy, m-liczba kolumn
	cout<<"Wpisz liczbe wierszy, a potem liczbe kolumn 1. macierzy: \n";
	cin>>n>>m;
	cout<<"Wpisz liczbe wierszy, a potem liczbe kolumn 2. macierzy: \n";
	cin>>k>>l;
	if(m!=k)exit(0);
	u=n;
	v=l;
	int **tab1 = new int * [n];
	for(int i=0;i<n;i++)
	{
		tab1[i] = new int [m];
	}
	int **tab2 = new int * [k];
	for(int i=0;i<k;i++)
	{
		tab2[i] = new int [l];
	}
	int **tab = new int * [u];
	for(int i=0;i<u;i++)
	{
		tab[i] = new int [v];
	}
	cout<<"Wprowadz dane do macierzy 1., przesuwajac sie wzdluz kolejnych wierszy: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>tab1[i][j];
		}
	}
	cout<<"Wprowadz dane do macierzy 2., przesuwajac sie wzdluz kolejnych wierszy: \n";
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<l;j++)
		{
			cin>>tab2[i][j];
		}
	}
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<v;j++)
		{
		tab[i][j]=0;
		}
	}
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<v;j++)
		{
			for(int r=0;r<m;r++)
			{
				tab[i][j]+=(tab1[i][r]*tab2[r][j]);
			}
		}
	}
	
	cout<<"Tablica wynikowa:\n";
	for(int i=0;i<u;i++)
	{
		for(int j=0;j<v;j++)
		{
			cout<<tab[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for (int i = 0; i<n; i++) delete [] tab1[i];
	delete [] tab1;
	for (int i = 0; i<k; i++) delete [] tab2[i];
	delete [] tab2;
	return 0;
}
