#include <cstdio>
#include <cstdlib>
#include <ctime>
void losuj(int n,int m)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\n",rand()%m);
	}
}

int main()
{
	int n,m;
	srand(time(NULL));
	printf("Podaj ilosc liczb ktore chcesz wylosowac: ");
	scanf("%d",&n);
	printf("Podaj gorna granice zakresu losowania (dolna granica to 0): ");
	scanf("%d",&m);
	if(n>0&&m>=0)losuj(n,m);
	else printf("Podano nieprawidlowa ilosc liczb lub gorna granice!");
    return 0;
}


