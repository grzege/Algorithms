#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int w = 0;

void znaki(string x,char z)
{

	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == z)w++;
	}
}

int main()
{
	fstream plik;
	plik.open("Tekst.txt",ios::in|ios::out);
	string x;
	char z;
	cout << "Wprowadz znak ktorego ilosc wystapien w pliku chcesz sprawdzic: ";
	cin >> z;
	while (!plik.eof())
	{
		getline(plik,x);
		znaki(x,z);
	}
	cout << "W pliku \"Tekst.txt\" jest " << w << " wystapien znaku " << z << ".\n";
	plik.close();
    return 0;
}

