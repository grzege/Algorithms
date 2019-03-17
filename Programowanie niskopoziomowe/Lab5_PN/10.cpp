#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,m,x=0,y=0,q1,q2;//n-liczba wierszy, m-liczba kolumn
	char wk;
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
	cout<<"1) Stosunek dwoch kolumn\n2) Stosunek dwoch wierszy\n";
	wk=getch();
	cout<<"Wprowadz numery kolumn/wierszy(numerowanie od 0):\n";
	cin>>q1>>q2;
	if(wk=='1')
	{
		for(int i=0;i<m;i++)
		{
			x+=tab[i][q1];
			y+=tab[i][q2];
		}
	}
	else if(wk=='2')
	{
		
		for(int i=0;i<n;i++)
		{
			x+=tab[q1][i];
			y+=tab[q2][i];
		}	
	}
	double stosunek=(double)x/(double)y;
	cout<<"Stosunek sumy liczb w podanych wierszach/kolumnach wynosi: "<<stosunek;
	for (int i = 0; i<n; i++) delete [] tab[i];
	delete [] tab;
	return 0;
}
