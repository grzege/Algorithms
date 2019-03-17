#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <cstdio>
//c++11
using namespace std;
int s = 0;

int pow(int x, int y)
{
	if (y == 0)return 1;
	if (y == 1)return x;
	else return x = x*pow(x, --y);
}

void dec2bin(string &x)
{
	int dec=atoi(x.c_str()), tab[32],i=0;
	while (dec)
	{
		tab[i++] = dec % 2;
		dec /= 2;
	}
	x.clear();
	for (int j = i - 1; j >= 0; j--)
	{
		x += (char)tab[j]+48;
	}
	s = 2;
	cout << "Liczba w systemie binarnym: "<< x <<endl<<"Wcisnij dowolny klawisz aby kontynuowac.\n";
	_getch();

}
void dec2oct(string &x)
{
	int dec = atoi(x.c_str()), tab[32], i = 0;
	while (dec)
	{
		tab[i++] = dec % 8;
		dec /= 8;
	}
	x.clear();
	for (int j = i - 1; j >= 0; j--)
	{
		x += (char)tab[j] + 48;
	}
	s = 3;
	cout << "Liczba w systemie osemkowym: " << x << endl << "Wcisnij dowolny klawisz aby kontynuowac.\n";
	_getch();

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
	s = 4;
	cout << "Liczba w systemie szesnastkowym: " << x << endl << "Wcisnij dowolny klawisz aby kontynuowac.\n";
	_getch();
}
void bin2dec(string &x, bool Y)
{
	int l = x.length()-1, w=0,sum=0;
	for (int i = l; i >= 0; i--)
	{
		sum += (x[i]-48)*pow(2, w++);
	}
	x.clear();
	x = to_string(sum);
	s = 1;
	if (Y)
	{
		cout << "Liczba w systemie dziesiatkowym: " << x << endl << "Wcisnij dowolny klawisz aby kontynuowac.\n";
		_getch();
	}
}
void oct2dec(string &x,bool Y)
{
	int l = x.length() - 1, w = 0, sum = 0;
	for (int i = l; i >= 0; i--)
	{
		sum += (x[i] - 48)*pow(8, w++);
	}
	x.clear();
	x = to_string(sum);
	s = 1;
	if (Y)
	{
		cout << "Liczba w systemie dziesiatkowym: " << x << endl << "Wcisnij dowolny klawisz aby kontynuowac.\n";
		_getch();
	}
}
void hex2dec(string &x, bool Y)
{
	int l = x.length() - 1, w = 0, sum = 0;
	for (int i = l; i >= 0; i--)
	{
		if((x[i]-48)<10)sum += (x[i] - 48)*pow(16, w++);
		else sum += (x[i] - 55)*pow(16, w++);
	}
	x.clear();
	x = to_string(sum);
	s = 1;
	if (Y)
	{
		cout << "Liczba w systemie dziesiatkowym: " << x << endl << "Wcisnij dowolny klawisz aby kontynuowac.\n";
		_getch();
	}
}
int main() 
{
	cout << "Wybierz system, w ktorym chcesz wpisac liczbe:\n[1] Dziesietny\n[2] Binarny\n[3] Osemkowy\n[4] Szesnastkowy\n";
	char w = _getch();
	if (w == '1')s = 1;
	if (w == '2')s = 2;
	if (w == '3')s = 3;
	if (w == '4')s = 4;
	system("cls");
	cout << "Wpisz liczbe: ";
	string x;
	cin >> x;	
	while (1)
	{
		system("cls");
		cout << "Wybierz system, na ktory chcesz zamienic wpisana liczbe:\n[1] Dziesietny\n";
		cout<<"[2] Binarny\n[3] Osemkowy\n[4] Szesnastkowy\n[5] Zakoncz program\n";
		cout << "Twoja liczba to: " << x << endl;
		w = _getch();
		switch (w)
		{
		case '1':
			if (s == 1)cout<<"Aktualnie liczba jest w tym systemie liczbowym!\n";
			else if (s == 2)bin2dec(x,1);
			else if (s == 3)oct2dec(x,1);
			else if (s == 4)hex2dec(x,1);
			break;
		case '2'://na binarny
			if (s == 1)dec2bin(x);
			else if (s == 2) cout << "Aktualnie liczba jest w tym systemie liczbowym!\n";
			else if (s == 3)
			{
				oct2dec(x,0);
				dec2bin(x);
			}
			else if (s == 4)
			{
				hex2dec(x, 0);
				dec2bin(x);
			}
			break;
		case '3'://na ósemkowy
			if (s == 1)dec2oct(x);
			else if (s == 2)
			{
				bin2dec(x, 0);
				dec2oct(x);
			}
			else if (s == 3) cout << "Aktualnie liczba jest w tym systemie liczbowym!\n";
			else if (s == 4)
			{
				hex2dec(x, 0);
				dec2oct(x);
			}
			break;
		case '4'://na heksadecymalny
			if (s == 1)dec2hex(x);
			else if (s == 2)
			{
				bin2dec(x, 0);
				dec2hex(x);
			}
			else if (s == 3)
			{
				oct2dec(x, 0);
				dec2hex(x);
			}
			else if (s == 4) cout << "Aktualnie liczba jest w tym systemie liczbowym!\n";
			break;
		default:
			exit(0);
			break;
		}
	}
	return 0;
}
