#include<cstdio>

double rownanie(int m,int n)
{
	double x=5+(4+(3+2*(m-n-1)));
	double y=(((2*(m+n+1)-3)-4)-5);
	return x/y;
}

int main()
{
	int m,n;
	printf("Wprowadz dwie liczby calkowite: ");
	scanf("%d %d",&m,&n);
	if((((2*(m+n+1)-3)-4)-5)!=0)printf("%lf",rownanie(m,n));
	else printf("Wykonanie dzialania nie jest mozliwe, gdyz dzielimy przez 0!");
	return 0;
}
