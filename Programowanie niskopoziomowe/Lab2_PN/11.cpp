#include<iostream>
using namespace std;

int pow(int x, int y)
{
	if(y==0)return 1;
	else if(y==1)return x;
	else return x=x*pow(x,y-1);
}

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
void Rozklad(int B,int P[], int tab[])
{
	if(B==1)
	{
		cout<<B<<" = 2^0";
		return;
	}
	cout<<B<<" = ";
	int X=B;
	bool k=1;
	for(int i=2;X>1;i++)
	{
		if(tab[i])
		{
			while(X%i==0)
			{
			X/=i;
			P[i]++;
			}
		}
	}
	for(int i=2;i<=B;i++)
	{
		if(P[i])
		{
			if(k)
			{
				cout<<i<<"^"<<P[i];
				k=0;
			}
			else cout<<" * "<<i<<"^"<<P[i];
		}
	}
}
int main()
{
	int B;
	cout<<"Podaj liczbe ktora chcesz rozlozyc na potegi liczb pierwszych (wieksza rowna 1): ";//poniewaz liczby pierwsze sa liczbami naturalnymi, nie uwzgledniam calkowitych ujemne i 0
	cin>>B;
	int *tab=new int [B+1];
	int *P=new int [B+1];
	for(int i=0;i<=B;i++)
	{
		P[i]=0;
	}
	Sito(B, tab);
	Rozklad(B, P, tab);
	return 0;
}
