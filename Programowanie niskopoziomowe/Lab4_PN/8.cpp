#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int  h = 0, wmax=0;


void wysokosc(fstream & plik)
{
	string pom;
	while (!plik.eof())
	{
		getline(plik, pom);
		h++;
	}
	plik.seekg(0, ios_base::beg);
}
void szerokosc(fstream & plik, int w[])
{
	string pom;
	int j = 0;
	while (!plik.eof())
	{
		w[j] = 1;
		getline(plik, pom);
		for (int i = 0; i < pom.length(); i++)
		{
			if (pom[i] == ' ') w[j]++;
		}
		if (w[j] > wmax)wmax = w[j];
		j++;
	}
	plik.seekg(0, ios_base::beg);
}
float avg(int sum)
{
	float srednia = (float)sum / (float) h;
	return srednia;
}
int main()
{
	string x;
	fstream plik;
	plik.open("Liczby.txt", ios::in | ios::out);
	wysokosc(plik);
	int *w = new int[h];
	szerokosc(plik, w);
	int ** tablica = new int *[h];
	for (int i = 0; i < h; i++)
	{
		tablica[i] = new int[w[i]];
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w[i]; j++)
		{
			plik>>tablica[i][j];
		}
	}
	plik.close();
	plik.open("Statystyki.txt", ios::in | ios::out);
	int *suma = new int[wmax];
	for (int i = 0; i < wmax; i++)suma[i] = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w[i]; j++)
		{
			suma[j] += tablica[i][j];
		}
	}
	plik << "Suma: ";
	for (int i = 0; i < wmax; i++)plik << suma[i] << " ";
	plik << "\nSrednia: ";
	for (int i = 0; i < wmax; i++)plik << avg(suma[i]) << " ";
	for (int i = 0; i<h; i++) delete[] tablica[i];
	delete[] tablica;
	delete[] w;
	cout<<"Statystyki na podstawie pliku \"Liczby.txt\" zapisano do pliku pt. \"Statystyki.txt\"\n";
	plik.close();
	return 0;
}
