#include <iostream>
using namespace std;

int Fibonacci(int X)
{
	int f[10000];
	f[0]=0;
	f[1]=1;
	for(int i=1; i<10000; i++)
	{
		if(f[i]>X)return f[i-1];
		else f[i+1]=f[i]+f[i-1];
	}
}

int main()
{
	int X;
	cout<<"Podaj liczbe calkowita  ograniczajaca ciag Fibonacciego: ";
	cin>>X;
	cout<<"Najwieksza liczba Fibonacciego nie wieksza od "<<X<<" to: "<<Fibonacci(X);
	return 0;
}
