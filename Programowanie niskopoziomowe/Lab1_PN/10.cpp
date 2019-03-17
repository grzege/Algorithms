#include <cstdio>
#include <conio.h>
#define PI 3.14159265358979323846
void kolo(double r)
{
	double p=PI*r*r,l=2*PI*r;
	printf("Pole kola wynosi:%.2lf\nObwod kola wynosi:%.2lf\n",p,l);
}
void kwadrat(double a)
{
	double p=a*a,l=4*a;
	printf("Pole kwadratu wynosi:%.2lf\nObwod kwadratu wynosi:%.2lf\n",p,l);
}
void prostokat(double a,double b)
{
	double p=a*b,l=2*a+2*b;
	printf("Pole prostokata wynosi:%.2lf\nObwod prostokata wynosi:%.2lf\n",p,l);
}
void trojkat(double a, double h, double b, double c)
{
	double p=a*h*0.5,l=a+b+c;
	printf("Pole trojkata wynosi:%.2lf\nObwod trojkata wynosi:%.2lf\n",p,l);
}
void trapez(double a, double b, double h, double c, double d)
{
	double p=(a+b)*h*0.5,l=a+b+c+d;
	printf("Pole trapezu wynosi:%.2lf\nObwod trapezu wynosi:%.2lf\n",p,l);
}
int main()
{
	printf("Wybierz figure dla ktorej pragniesz obliczyc pole i obwod:\n[1]Kolo\n[2]Kwadrat\n[3]Prostokat\n[4]Trojkat\n[5]Trapez\n");
	char w=getch();
	double r,a,b,c,d,h;
	switch(w)
	{
		case '1':
			printf("Podaj dlugosc promienia kola: ");
			scanf("%lf",&r);
			kolo(r);
			break;
		case '2':
			printf("Podaj dlugosc boku kwadratu: ");
			scanf("%lf",&a);
			kwadrat(a);
			break;
		case '3':	
			printf("Podaj dlugosci bokow prostokata a b: ");
			scanf("%lf %lf",&a,&b);
			prostokat(a,b);
			break;
		case '4':	
			printf("Podaj dlugosci podstawy a, wychodzacej z niej wysokosci h i ramion b c: ");
			scanf("%lf %lf %lf %lf",&a,&h,&b,&c);
			trojkat(a,h,b,c);
			break;
		case '5':
			printf("Podaj dlugosci podstaw trapezu a b oraz jego wysokosci h i ramion c d: ");
			scanf("%lf %lf %lf %lf %lf",&a, &b, &h, &c, &d);
			trapez(a,b,h,c,d);
			break;
		default:
			printf("Nie wybrano zadnej z dostepnych opcji!");
	}
    return 0;
}


