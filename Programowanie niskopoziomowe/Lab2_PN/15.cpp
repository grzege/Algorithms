#include<iostream>
#include<math.h>
using namespace std;

unsigned long long silnia(int n)
{
	if(n==0)return 1;
	unsigned long long s=1;
	for(int i=1;i<=n;i++)
	{
		s*=i;
	}
	return s;
}
void simmons()
{
	unsigned long long sil;
	for(int i=1;i<=20;i++)
	{
		sil=silnia(i);
		for(int j=2;j<1400000;j++)
		{
			if((j*(j+1)*(j-1))==sil)
			{
				cout<<i<<"! = "<<sil<<" = "<<j-1<<" * "<<j<<" * "<<j+1<<endl;
				break;
			}
		}
	}
}

int main()
{
	simmons();
	cout<<"Nie jestem w stanie znalezc wiecej takich siln (jesli w ogole istnieja), gdyz nie pozwala mi na to zakres liczbowy typu danych.\n";
	return 0;
}
