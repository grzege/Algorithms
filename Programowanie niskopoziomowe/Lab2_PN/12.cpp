#include<iostream>
using namespace std;

potega(int N, int x)
{
	if (x==0)return 1;
	if (x==1)return N;
	int wynik=N,pom=0;
	for(int i=1;i<x;i++)
	{
		for(int j=1;j<N;j++)pom+=wynik;
		wynik+=pom;
		pom=0;
	}
	return wynik;
}

int main(){
	int N,x;
	cout<<"Podaj liczbe naturalna stanowiaca podstawe potegi, a nastepnie jej wykladnik: ";
	cin>>N>>x;
	cout<<N<<"^"<<x<<" = "<<potega(N,x);
	return 0;
}
