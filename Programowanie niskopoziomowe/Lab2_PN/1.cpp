#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void reverse(int tab[],const int N)
{
	int p;
	cout<<endl<<"Odwrocona: ";
	for(int i=0;i<N/2;i++)
	{
		p=tab[i];
		tab[i]=tab[N-i-1];
		tab[N-i-1]=p;
	}
}
void wypisz(int tab[],const int N)
{
	for(int i=0; i<N; i++)
	{
		cout<<tab[i]<<" ";
	}
}

int main()
{
	int N;
	cout<<"Wprowadz ilosc elementow w tablicy, ktora chcesz odwrocic: ";
	cin>>N;
	int *tab=new int [N];
	srand(time(NULL));
	for(int i=0; i<N; i++)
	{
		tab[i]=(rand()%100)+1;//tutaj mo¿na zmieniæ zakres losowania liczb zapisywanych do tablicy
	}
	cout<<"Tablica: ";
	wypisz(tab,N);
	reverse(tab,N);
	wypisz(tab,N);
	return 0;
}
