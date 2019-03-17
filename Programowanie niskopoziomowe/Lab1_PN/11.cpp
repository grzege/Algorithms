#include <cstdio>
#include <conio.h>
#include <cmath>
#define PI 3.14

double potega(double x, int y)
{
	if(y==0)return 1;
	if(y==1)return x;
	else return x*potega(x,y-1);
}
int main()
{
	printf("Wybierz interesujaca Cie operacje:\n[1]Potegowanie\n[2]Wyznaczanie odwrotnosci\n[3]Logarytm naturalny\n[4]Sinus\n[5]Tangens\n");
	char w=getch();
	double x;
	int y;
	switch(w)
	{
		case '1':
			printf("Podaj podstawe i wykladnik potegi: ");
			scanf("%lf %d",&x,&y);
			printf("%.2lf^%d = %.2lf\n",x,y,potega(x,y));
			break;
		case '2':
			printf("Podaj liczbe: ");
			scanf("%lf",&x);
			printf("Liczba odwrotna: %.2lf",1/x);
			break;
		case '3':	
			printf("Podaj liczbe logarytmowana: ");
			scanf("%lf",&x);
			printf("Wynik wynosi: %.2lf",log(x));
			break;
		case '4':	
			printf("Podaj argument funkcji sinus w radianach: ");
			scanf("%lf",&x);
			printf("Wynik wynosi: %.2lf",sin(x));
			break;
		case '5':
			printf("Podaj argument funkcji tangens w radianach: ");
			scanf("%lf",&x);
			if(x!=PI/2)printf("Wynik wynosi: %.2lf",tan(x));
			else printf("Tangens dla pi/2 nie istnieje.");
			break;
		default:
			printf("Nie wybrano zadnej z dostepnych opcji!");
	}
    return 0;
}


