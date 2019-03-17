#include<cstdio>
#include<math.h>
double wyroznik(int a, int b,int c)
{
	double d=b*b-(4*a*c);
	return d;
}

void roots(int a, int b, int c)
{
	if(a==0&&b==0&&c==0)printf("Rownanie ma nieskonczenie wiele rozwiazan.\n");
	else if(a==0&&b==0)printf("Rownanie jest sprzeczne, nie ma rozwiazan.\n");
	else if(a==0)
	{
		double x,rb=b,rc=c;
		printf("Rownanie ma jedno rozwiazanie: x = %.2lf\n",x=-rc/rb);
	}
	else 
	{
		double delta=wyroznik(a,b,c);
		if(delta<0)printf("Rownanie nie posiada rozwiazan rzeczywistych.\n");
		else if(delta==0)
		{
			double x=-b/(2*a);
			printf("Rownanie posiada jedno rozwiazanie x = %.2lf\n",x);
		}
		else
		{
			double x1=(-b+sqrt(delta))/(2*a), x2=(-b-sqrt(delta))/(2*a);
			printf("Rownanie posiada dwa rozwiazania x1 = %.2lf i x2 = %.2lf\n",x1,x2);
		}
	}
}

int main()
{
	int a,b,c;
	printf("Wprowadz calkowite wspolczynniki rownania kwadratowego ax^2+bx+c=0, w kolejnosci - a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	roots(a,b,c);
	return 0;
}
