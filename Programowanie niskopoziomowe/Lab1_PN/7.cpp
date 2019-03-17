#include<cstdio>
#include<cmath>
struct point
{
	int X;
	int Y;
};
typedef struct point P;
void figura(P A, P B, P C, P D)
{
	if (A.Y==B.Y&&D.Y==C.Y&&B.X==C.X&&D.X==A.X)
	{
		if (abs(B.X-A.X)==abs(D.Y-A.Y)&&abs(C.X-D.X)==abs(C.Y-B.Y)) printf("Figura jest kwadratem.\n");
		else printf("Figura jest prostokatem.\n");
	}
	else printf("Figura nie jest ani kwadratem, ani prostokatem.\n");
}
int main()
{
	point A,B,C,D;
	printf("Sprawdzanie figury wg standardowych oznaczen ABCD:\n\n");
	printf("Podaj wspolrzedne punktu A (X Y) (lewy dolny wierzcholek): ");
	scanf("%d %d",&A.X,&A.Y);
	printf("Podaj wspolrzedne punktu B (X Y) (prawy dolny wierzcholek): ");
	scanf("%d %d",&B.X,&B.Y);
	printf("Podaj wspolrzedne punktu C (X Y) (prawy gorny wierzcholek): ");
	scanf("%d %d",&C.X,&C.Y);
	printf("Podaj wspolrzedne punktu D (X Y) (lewy gorny wierzcholek): ");
	scanf("%d %d",&D.X,&D.Y);
	figura(A,B,C,D);
	return 0;
}
