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
void Blizniak(int B, int tab[])
{
	for(int i=2;i<=B;i++)
	{
		if(i+2<=B)
		{
			if(tab[i]&&tab[i+2])cout<<i<<" "<<i+2<<endl;	
		}
	}
}
int main()
{
	int B;
	cout<<"Podaj a dla zakresu poszukiwania liczb blizniaczych <1,a>: ";
	cin>>B;
	int *tab=new int [B+1];
	Sito(B, tab);
	Blizniak(B, tab);
	return 0;
}
