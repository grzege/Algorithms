#include<cstdio>
#include<math.h>
void odleglosc(double x, double y)
{
		printf("Odleglosc punktu przeciecia od poczatku ukladu wspolrzednych wynosi: %.2lf\n",sqrt(x*x+y*y));
}
void punkt_przeciecia(double a, double b, double c, double d)
{
	double x=(d-b)/(a-c);
	double y=a*x+b;
	printf("P (%.2lf,%.2lf)\n",x,y);
	odleglosc(x,y);
}
int main()
{
	double a,b,c,d;
	printf("Podaj wspolczynniki a1 i b1 prostej o rownaniu y1=a1*x+b1: ");
	scanf("%lf %lf",&a,&b);
	printf("Podaj wspolczynniki a2 i b2 prostej o rownaniu y2=a2*x+b2: ");
	scanf("%lf %lf",&c,&d);
	printf("Punktem przeciecia dwoch prostych jest: ");
	punkt_przeciecia(a,b,c,d);
	return 0;
}
