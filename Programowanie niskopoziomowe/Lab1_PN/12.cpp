#include <cstdio>

bool boki(double x,double y,double z)
{
	return !(x<=0||y<=0||z<=0||x>=y+z||y>=x+z||z>=y+x);
}

int main()
{
	double x,y,z;
	printf("Wprowadz trzy liczby calkowite odzwierciedlajace dlugosci bokow trojkata: ");
	scanf("%lf %lf %lf",&x,&y,&z);
	if(boki(x,y,z))printf("Podane wartosci moga byc dlugosciami bokow trojkata.\n");
	else printf("Podane wartosci NIE moga byc dlugosciami bokow trojkata.\n");
    return 0;
}


