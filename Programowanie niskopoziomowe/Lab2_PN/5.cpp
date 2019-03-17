#include <iostream>
using namespace std;

void doskonala(int a)
{
	int suma=0;
	cout<<"Liczby doskonale w przedziale <1,"<<a<<"> to: ";
	for(int x=1;x<=a;x++)
	{
		for(int d=x/2;d>0;d--)
		{
			if(x%d==0)suma+=d;
		}
		if(x==suma)cout<<x<<" ";
		suma=0;
	}
}

int main()
{
	int a;
	cout<<"Podaj gorna granice przedzialu poszukiwania liczby doskonalej: ";
	cin>>a;
	doskonala(a);
	return 0;
}
