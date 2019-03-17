#include <string>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstdio>
#include <math.h>>
using namespace std;

void hex2dec(string &x)
{
	int l = x.length() - 1, w = 0, sum = 0;
	for (int i = l; i >= 0; i--)
	{
		if ((x[i] - 48)<10)sum += (x[i] - 48)*pow(16, w++);
		else sum += (x[i] - 55)*pow(16, w++);
	}
	x.clear();
	x = to_string(sum);
}

void dec2hex(string &x)
{
	int dec = atoi(x.c_str()), tab[32], i = 0;
	while (dec)
	{
		tab[i++] = dec % 16;
		dec /= 16;
	}
	x.clear();
	for (int j = i - 1; j >= 0; j--)
	{
		if (tab[j] < 10)x += (char)tab[j] + 48;
		if (tab[j] == 10)x += 'A';
		if (tab[j] == 11)x += 'B';
		if (tab[j] == 12)x += 'C';
		if (tab[j] == 13)x += 'D';
		if (tab[j] == 14)x += 'E';
		if (tab[j] == 15) x += 'F';
	}
}

void dzialanie(string a, string b,int x)
{
	hex2dec(a);
	hex2dec(b);
	int ad = atoi(a.c_str()), bd = atoi(b.c_str()), dec;
	if (x == 1) dec = ad + bd;
	if (x == 2) dec = ad - bd;
	if (x == 3) dec = ad * bd;
	if (x == 4) dec = ad / bd;
	string wyn;
	dec2hex(a);
	dec2hex(b);
	wyn=to_string(dec);
	dec2hex(wyn);
	cout << a<<" + "<<b<<" = "<<wyn<<endl;
}

int main()
{
	string a, b;
	cout << "Witaj w kalkulatorze liczb szesnastkowych!\n";
	while (1)
	{
		cout << "Wpisz dwie liczby w tym systemie : ";
		cin >> a >> b;
		cout << "Masz mozliwosc wykonania nastepujacych operacji:\n[1]";
		cout<<" Dodawanie\n[2] Odejmowanie\n[3] Mnozenie\n[4] Dzielenie\n[5] Zakoncz program\n";
		char w;
		w = _getch();
		switch (w)
		{
		case '1':
			dzialanie(a, b, 1);
			cout << "Wcisnij dowolny klawisz aby kontynuowac...";
			_getch();
			system("cls");
			break;
		case '2':
			dzialanie(a, b, 2);
			cout << "Wcisnij dowolny klawisz aby kontynuowac...";
			_getch();
			system("cls");
			break;
		case '3':
			dzialanie(a, b, 3);
			cout << "Wcisnij dowolny klawisz aby kontynuowac...";
			_getch();
			system("cls");
			break;
		case '4':
			if(b!="0")dzialanie(a, b, 4);
			else cout << "Nie mozna dzielic przez 0!\n";
			cout << "Wcisnij dowolny klawisz aby kontynuowac...";
			_getch();
			system("cls");
			break;
		default:
			exit(0);
			break;
		}
	}
    return 0;
}

