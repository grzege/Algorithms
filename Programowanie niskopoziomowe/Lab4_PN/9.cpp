#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	fstream plik;
	int licznik = 0;
	string x;
	plik.open("Tekst.txt", ios::in | ios::out);
	while (!plik.eof())
	{
		getline(plik, x);
		bool srednik = 0;
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == ' ');
			else if (x[i] == ';')srednik = 1;
			else break;
		}
		if (!srednik)
		{
			bool flag = 1;
			for (int i = 0; i < x.length() - 1; i++)
			{
				if (x[i] != ' '&&x[i] != '\t'&&flag)
				{
					licznik++;
					flag = 0;
				}
				else if (x[i] == ' ' || x[i] == '\t')flag = 1;
			}
		}
	}
	plik.close();
	plik.open("Slowa.txt", ios::in | ios::out);
	plik << licznik;
	cout<<"Liczba slow w pliku \"Tekst.txt\" zostala zapisana do pliku pt.:\"Slowa\"";
	plik.close();
	return 0;
}
