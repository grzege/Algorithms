#include <iostream>
#include <fstream>
using namespace std;

int absolute(int &x)
{
	if (x < 0)return -x;
	else  return x;
}

int main()
{
	int tym;
	fstream plik;
	plik.open("Liczby.txt", ios::in | ios::out);
	cout << "Wartosci bezwgledne liczb wczytanych z pliku \"Liczby.txt\": \n";
	while (!plik.eof())
	{
		plik >> tym;
		cout<<absolute(tym);
		cout<<" , ";
	} 
	cout << endl;
	plik.close();
	return 0;
}
