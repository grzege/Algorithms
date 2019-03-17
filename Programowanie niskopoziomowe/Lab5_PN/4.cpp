#include<iostream>
using namespace std;

int main()
{
	int n,m,sum=0;//n-liczba wierszy, m-liczba kolumn
	cout<<"Wpisz liczbe wierszy, a potem liczbe kolumn macierzy: \n";
	cin>>n>>m;
	int **tab = new int * [n];
	for(int i=0;i<n;i++)
	{
		tab[i] = new int [m];
	}
	cout<<"Wprowadz dane do macierzy, przesuwajac sie wzdluz kolejnych wierszy: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>tab[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		if(i<m)
		{
			sum+=tab[i][i];
		}
	}
	cout<<"Suma liczb na glownej przekatnej jest rowna: "<<sum;
	for (int i = 0; i<n; i++) delete [] tab[i];
	delete [] tab;
	return 0;
}
