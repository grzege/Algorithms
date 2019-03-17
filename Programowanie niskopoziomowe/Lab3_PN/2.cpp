#include<iostream>
#include <random>//C++11
#include <time.h>
#include <cstdlib>
#define FLT_MIN 1.175494e-38
#define FLT_MAX 3.402823e+38
using namespace std;

union Bag
{
	int l;
	char c;
	float f;
};

int main()
{
	int n;
	cout<<"Podaj wielkosc tablicy losowych elementow typu Bag: ";
	cin>>n;
	Bag *tab = new Bag [n];
	int *w = new int [n];
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> disI(INT_MIN,INT_MAX);
	uniform_real_distribution<> disF(FLT_MIN,FLT_MAX);
	uniform_int_distribution<> disC(33,126);
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		w[i]=rand()%3+1;
		if(w[i]==1)
		{
			tab[i].l=disI(gen);
		}
		if(w[i]==2)
		{
			tab[i].c=disC(gen);
		}
		if(w[i]==3)
		{
			tab[i].f=disF(gen);
		}
	}
	int T;
	cout<<"Czy chcesz wyswietlic wylosowane elementy?\n[0] Nie\n[1] Tak\n";
	cin>>T;
	cout<<"\n\n";
	if(T)for(int i=0;i<n;i++)
	{
		if(w[i]==1)cout<<tab[i].l<<endl;
		if(w[i]==2)cout<<tab[i].c<<endl;
		if(w[i]==3)cout<<tab[i].f<<endl;
	}
	return 0;
}
