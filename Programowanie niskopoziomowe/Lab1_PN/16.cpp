#include <cstdio>
#include <conio.h>

void szyfruj(char z[],int d)
{
	for(int j=0;j<d;j++)
	{
		for(int i=0;z[i]!='\0';i++)
		{
			if((z[i]>64&&z[i]<90)||(z[i]>96&&z[i]<122))z[i]++;
			else z[i]-=25;
		}
	}
}
void deszyfruj(char z[],int d)
{
	for(int j=0;j<d;j++)
	{
		for(int i=0;z[i]!='\0';i++)
		{
			if((z[i]>65&&z[i]<91)||(z[i]>97&&z[i]<123))z[i]--;
			else z[i]+=25;
		}
	}
}
int main()
{	
	unsigned int d;
	char z [256],w;
	printf("Wprowadz tekst, ktory chcesz szyfrowac: ");
	scanf("%s",&z);
	printf("Wprowadz dodatnia odleglosc zamiany liter dla szyfru: ");
	scanf("%d",&d);
	printf("[1]Szyfrowanie\n[2]Deszyfrowanie\n");
	w=getch();
	switch(w)
	{
		case '1':
			szyfruj(z,d);
			break;
		case '2':
			deszyfruj(z,d);
			break;
		default:
			printf("Wybrano nieprawidlowa opcje!");
			break;
	}
	printf("Zaszyfrowany/odszyfrowany tekst to: %s",z);
    return 0;
}


