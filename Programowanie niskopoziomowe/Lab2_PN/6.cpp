#include <iostream>
using namespace std;

int sumpodz(int a)
{
	int suma=0;
	for(int d=a/2;d>0;d--)
		{
			if(a%d==0)suma+=d;
		}
	return suma;
}
void friends(int a)
{
	cout<<"Pary wszystkich liczb zaprzyjaznionych z przedzialu <1,"<<a<<"> to: \n";
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(sumpodz(i)==j&&sumpodz(j)==i)cout<<i<<"  "<<j<<endl;
		}
	}
}

int main()
{
	int a;
	cout<<"Podaj gorna granice przedzialu poszukiwania liczb zaprzyjaznionych: ";
	cin>>a;
	friends(a);
	return 0;
}
