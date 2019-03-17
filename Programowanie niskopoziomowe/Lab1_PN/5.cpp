#include<cstdio>
#include<math.h>

double N(double a)
{
	double x=pow(sin(pow(a,3)),2)+1.25;
	double y=pow(cos(pow(a,2)),3)+1.25;
	double z=log(pow(tan(a+2),2))+2.5;
	return (sqrt(x/y))/z;
}

int main()
{
	double x;
	printf("Wprowadz liczbe rzeczywista: ");
	scanf("%lf",&x);
	printf("%lf",N(x));
	return 0;
}
