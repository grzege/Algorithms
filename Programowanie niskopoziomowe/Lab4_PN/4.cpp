#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int linia(string x)
{
	return x.length();
}

int main()
{
	fstream plik;
	plik.open("Tekst.txt", ios::in | ios::out);
	string x, max, min;
	 
	bool i=1;
	while (!plik.eof())
	{
		getline(plik, x);
		if (i)
		{
			min = x;
			max = x;
		}
		else
		{
			if (linia(min) > linia(x))min = x;
			if (linia(max) < linia(x))max = x;
		}
		i = 0;
	}
	cout << "Nadluzsza linia w pliku \"Tekst.txt\" to:\n"<<max<<endl;
	cout << "Najkrotsza linia w pliku \"Tekst.txt\" to:\n"<<min<<endl;
	plik.close();
	return 0;
}

