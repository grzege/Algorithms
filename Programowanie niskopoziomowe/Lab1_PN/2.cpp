#include<cstdio>

double rownanie(int a, int b)
{
	double x=a*(a+b);
	double y=(a+b)*(a+b);
	return x/y;
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a!=0&&b!=0)printf("%lf",rownanie(a,b));
	else printf("Liczby a i b powinny byc rozne od 0");
	return 0;
}
