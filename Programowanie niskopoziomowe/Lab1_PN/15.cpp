#include <cstdio>
double a,b;//y=ax+b
struct point
{
	int X;
	int Y;
};
typedef struct point P;

void prosta(P A, P B)
{
	a=(B.Y-A.Y)/(B.X-A.X);
	b=(A.Y*B.X-B.Y*A.X)/(B.X-A.X);
}
bool wspol(P C)
{
	return a*C.X+b==C.Y;
}

int main()
{
	P A,B,C;
	printf("Podaj wspolrzedne punktu A (X Y): ");
	scanf("%d %d",&A.X,&A.Y);
	printf("Podaj wspolrzedne punktu B (X Y): ");
	scanf("%d %d",&B.X,&B.Y);
	printf("Podaj wspolrzedne punktu C (X Y): ");
	scanf("%d %d",&C.X,&C.Y);
	prosta(A,B);
	if(wspol(C))printf("Punkty A, B i C sa wspolliniowe.\n");
	else printf("Punkty A, B i C NIE sa wspolliniowe.\n");
	
    return 0;
}


