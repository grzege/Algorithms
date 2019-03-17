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

int main()
{
	int a,b;
	cout<<"Podaj dwie liczby calkowite (dla NWD): ";
	cin>>a>>b;
	cout<<"Najwiekszy wspolny dzielnik dla liczb "<<a<<" i "<<b<<" to: "<<NWD(a,b);
	return 0;
}
