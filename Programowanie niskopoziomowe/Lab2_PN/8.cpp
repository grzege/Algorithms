#include<iostream>
using namespace std;

void Sito(int B, int tab[])
{
	for(int i=0;i<=B;i++)
	{
		tab[i]=true;
	}
	if(B>0)tab[0]=false;
	if(B>1)tab[1]=false;
	for(int i=2;i*i<=B;i++)
	{
		if (tab[i]==true)
		{
			for(int j=i*i;j<=B;j+=i) tab[j]=false;
		}
	}
}
void czySuma(int x,int tab[],bool &T)
{
	T=0;
	for(int i=0;i<=x;i++)
	{
		if(tab[i])
		{
			for(int j=0;j<=x;j++)
			{
				if(tab[j]&&(j+i)==x)T=1;
			}
		}
	}
}

int main()
{
	cout<<"Oczywistym jest, ze parzyste liczby ujemne nie sa suma dwoch liczb pierwszych.\n";
	cout<<"Ponadto liczba 2 jest liczba parzysta i najmniejsza liczba pierwsza, wiec nie spelnia warunku.\n";
	int B=5000;//tutaj mo¿na zmieniæ zakres sprawdzania poprawnoœci twierdzenia, B musi byæ wiêksze równe 4, dla du¿ych liczb algorytm jest znacz¹co wolniejszy, zalecane 5000
	int *tab=new int [B+1];
	bool T;
	Sito(B,tab);
	for(int i=4;i<=B;i+=2)
	{
		czySuma(i,tab,T);
		if(!T)
		{
			cout<<"Liczby parzyste od 4 wzwyz rowniez nie spelniaja twierdzenia.\n";
			break;
		}
	}
	if(T)cout<<"Liczby parzyste od 4 wzwyz spelniaja twierdzenie.";
	return 0;
}
