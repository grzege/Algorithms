#include<iostream>
using namespace std;
int cal=2147483647;

int pow(int x, int y)
{
	if(y==0)return 1;
	else if(y==1)return x;
	else return x=x*pow(x,y-1);
}

void Sito(int B, int tab[])
{
	for(int i=0;i<=cal-1;i++)
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
void Mersenne(int B, int tab[])
{
	for(int p=2;p<=31;p++)
	{
		if(tab[p]&&pow(2,p)-1<=B)
		{
			if(tab[pow(2,p)-1])cout<<"(2^"<<p<<")-1 = "<<pow(2,p)-1<<endl;
		}
	}
}
int main()
{
	int B;
	cout<<"Podaj a dla zakresu poszukiwania liczb Mersenne'a <1,a>: ";
	cin>>B;
	int *tab=new int [cal];
	Sito(B, tab);
	Mersenne(B, tab);
	return 0;
}
