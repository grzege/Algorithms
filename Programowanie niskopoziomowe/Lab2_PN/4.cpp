#include <iostream>
using namespace std;

int min(int a, int b)
{
	if(a>=b)return a;
	else return b;
}

int NWD(int a,int b)
{
	int m=min(a,b);
	for(m;m>0;m--)
	{
		if(a%m==0&&b%m==0)return m;
	}
}

int NWW(int a,int b)
{
	return a*b/NWD(a,b);
}

int main()
{
	int a,b;
	cout<<"Podaj dwie liczby calkowite: ";
	cin>>a>>b;
	cout<<"Najmniejszy wspolna wielokrotnosc dla liczb "<<a<<" i "<<b<<" to: "<<NWW(a,b);
	return 0;
}
