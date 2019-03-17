#include<iostream>
using namespace std;


int silnia(int x)
{
	if(x==0)return 1;
	int s=1;
	for(int i=1;i<=x;i++)
	{
		s*=i;
	}
	return s;
}
int newton(int n,int k)
{
	return silnia(n)/(silnia(k)*silnia(n-k));
}
void ciag_new(int n,int k)
{
	int sum=0;
	for(int i=1;i<=k;i++)
	{
		int pom=newton(n,i);
		sum+=pom;
		cout<<pom<<" ";
		if(i!=k)cout<<"+ ";
		if(i==k)cout<<"= ";
	}
	cout << sum;
}
int main()
{
	int n,k;
	cout<<"Wpisz n, a potem k: ";
	cin>>n>>k;
	ciag_new(n,k);
	return 0;
}
