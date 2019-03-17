#include<iostream>
using namespace std;

int reszta(int a, int b)
{
	while (a-b>=0)
	{
		a-=b;	
	}
	return a;
}

int main(){
	int a,b;
	cout<<"Podaj liczbe a i b dla dzialania a mod b: ";
	cin>>a>>b;
	cout<<a<<" % "<<b<<" = "<<reszta(a,b);
	return 0;
}
