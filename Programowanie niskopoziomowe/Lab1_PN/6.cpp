#include<cstdio>
#include<conio.h>

double FtoC(double x)
{
	return (5.0/9.0)*(x-32);
}
double CtoF(double x)
{
	return (9.0/5.0)*x+32;
}

int main()
{
	double t;
	printf("[1] Zamiana ze stopni Celsjusza na stopnie Fahrenheita\n[2] Zamiana ze stopni Fahrenheita na Celsjusza\n");
	char w=getch();
	switch(w)
	{
		case '1':
			printf("Podaj temperature w stopniach Celsjusza: ");
			scanf("%lf",&t);
			printf("%lf F",CtoF(t));
			break;
		case '2':
			printf("Podaj temperature w stopniach Fahrenheita: ");
			scanf("%lf",&t);
			printf("%lf C",FtoC(t));
			break;
		default:
			printf("Nie wybrano zadnej z dostepnych opcji!");
	}
	return 0;
}
