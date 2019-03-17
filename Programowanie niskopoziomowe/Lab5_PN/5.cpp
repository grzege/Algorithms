#include<iostream>
using namespace std;

int main()
{
	int n,m,pod=0,nad=0;//n-liczba wierszy, m-liczba kolumn
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
		for(int j=0;j<m;j++)
		{
			if(i!=j)
			{
				if(i>j)pod+=tab[i][j];
				else nad+=tab[i][j];
			}
		}
	}
	double stosunek=(double)nad/(double)pod;
	cout<<"Stosunek sumy liczb nad glowna przekatna do sumy liczb pod nia jest rowna: "<<stosunek;
	for (int i = 0; i<n; i++) delete [] tab[i];
	delete [] tab;
	return 0;
}
