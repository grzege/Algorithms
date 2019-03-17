#include<iostream>
using namespace std;

void Sito(int B, int tab[])
{
	for(int i=0;i<=B;i++)
	{
		tab[i]=true;
	}
	if(B>0)tab[0]=false;
	if(B>1)tab[1]=false;
	for(int i=2;i*i<=B;i++){
		if (tab[i]==true)
		{
			for(int j=i*i;j<=B;j+=i) tab[j]=false;
		}
	}
}

int main(){
	int A,B;
	cout<<"Podaj A i B wyznaczajace zakres <A,B> wyznaczania liczb pierwszych: ";
	cin>>A>>B;
	int *tab=new int [B+1];
	Sito(B, tab);
	for(int i=A;i<=B;i++)if(tab[i]==true)cout<<i<<endl;
	return 0;
}
