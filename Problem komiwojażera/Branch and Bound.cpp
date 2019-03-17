#include<iostream>
#include<math.h>
#include <cstring>
#include <vector>
#include <signal.h>
using namespace std;

bool *V;//tablica odwiedzenia danego miasta
int *S, *Sh;//stos miast optymalny/dla danego cyklu
float d = 0, dh = 0; //odleg³oœæ optymalna/dla danego cyklu
float **D; //macierz odleg³oœci
int licz = 0, n; //licznik dla stosów, liczba miast
int x0 = 0; //wierzcho³ek startow
volatile sig_atomic_t tle = 0;

void term(int signum)
{
	tle = 1;
}

float distance(float x1, float x2, float y1, float y2)
{
	float d = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	d = sqrt(d);
	return d;
}

int min(int x)
{
	float min;
	int m;
	for (int i = 0; i < n; i++)
	{
		if (!V[i])
		{
			min = D[x][i];
			m = i;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (!V[i])
		{
			if (min > D[x][i])
			{
				min = D[x][i];
				m = i;
			}
		}
	}
	return m;
}

void BF(int x)
{
	Sh[licz++] = x;
	if (licz < n)
	{
		V[x] = true;
		for (int i = 0; i < n && !tle; i++)
		{
			if (!V[i])
			{
				dh += D[x][i];
				if (dh > d)
				{
					dh -= D[x][i];
					continue;
				}
				BF(i);
				dh -= D[x][i];
			}
		}
		V[x] = false;
	}
	else
	{
		dh += D[x][x0];
		if (dh < d)
		{
			d = dh;
			for (int i = 0; i < licz; i++)
			{
				S[i] = Sh[i];
			}
		}
		dh -= D[x][x0];
	}
	licz--;
}

struct miasto
{
	int id;
	float x;
	float y;
};
int main()
{
	struct sigaction action;
	memset(&action, 0, sizeof(struct sigaction));
	action.sa_handler = term;
	sigaction(SIGTERM, &action, NULL);
	miasto pom;
	vector <miasto> M;
	ios_base::sync_with_stdio(false);
	while (cin >> pom.id >> pom.x >> pom.y)
	{
		M.push_back(pom);
	}
	n = M.size();
	S = new int[n];
	Sh = new int[n];
	V = new bool[n];
	for (int i = 0; i < n; i++)V[i] = false;
	D = new float *[n];
	for (int i = 0; i < n; i++)
	{
		D[i] = new float[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			D[i][j] = distance(M[i].x, M[j].x, M[i].y, M[j].y);
		}
	}
	int mi, po = x0;
	S[0] = x0;
	for (int i = 0; i < n - 1; i++)
	{
		V[po] = true;
		mi = min(po);
		d += D[po][mi];
		po = mi;
		S[i + 1] = po;
	}
	d += D[po][x0];
	for (int i = 0; i < n; i++)V[i] = false;
	BF(x0);
	for (int i = 0; i < n; i++)
	{
		cout << M[S[i]].id << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[] D[i];
	}
	delete[] D, V, S, Sh;
	return 0;
}


