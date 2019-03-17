#include<cstdio>

float rownanie(float a,float b)
{
	float x=a-b-1;
	float y=a*a+b*b+1;
	return 4*a+2*(x/y);
}

int main()
{
	float a,b;
	printf("Podaj dwie liczby zmiennoprzecinkowe: ");
	scanf("%f %f",&a,&b);
	if(a*a+b*b+1!=0)printf("%f",rownanie(a,b));
	else printf("Wykonanie dzialania nie jest mozliwe, gdyz dzielimy przez 0!");
	return 0;
}
