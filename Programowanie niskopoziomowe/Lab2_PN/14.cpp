#include<iostream>
using namespace std;

int silnia(int n)
{
	if(n==0)return 1;
	int s=1;
	for(int i=1;i<=n;i++)
	{
		s*=i;
	}
	return s;
}

int main(){
	int n;
	cout<<"Podaj liczbe naturalna n, dla ktorej pragniesz obliczy n!: ";
	cin>>n;
	cout<<silnia(n);
	return 0;
}
