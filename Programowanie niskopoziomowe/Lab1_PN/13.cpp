#include <cstdio>
#include<conio.h>
#include<cmath>
#include <windows.h>
#include<time.h>

double ary(int s, int l)
{
	double sr=s,lr=l;
	return sr/lr;
}
double geo(int s, int l)
{
	double sr=s,lr=l;
	return pow(sr,(1/lr));
}

int main()
{
	int x,s=0,i=1,l=0;
	printf("Wprowadzaj liczby naturalne (aby przerwac przytrzymaj x po wpisaniu liczby):\n");
	while(true)
	{
		scanf("%d",&x);
		s+=x;
		i*=x;
		l++;
		Sleep(1000);
		if(GetKeyState('X')<0)break;
	}
	printf("Pusc x!\n");
	Sleep(2500);
	printf("Srednia arytmetyczna: %.2lf\n", ary(s,l));
	printf("Srednia geometryczna: %.2lf",geo(i,l));
    return 0;
}


