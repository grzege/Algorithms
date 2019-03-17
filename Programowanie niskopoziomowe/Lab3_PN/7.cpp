#include <iostream>
#include <string>
using namespace std;

void zamien(string &c, int i, int j)
{
	char pom;
	pom = c[i];
	c[i] = c[j];
	c[j] = pom;
}
void reverse(string &c,int i, int j)
{
	if (j > i)
	{
		zamien(c, i, j);
		reverse(c, i + 1, j - 1);
	}
}

int main() {
	string ciag;
	cout << "Wpisz ciag znakow, ktory chcesz odwrocic: ";
	cin >> ciag;
	reverse(ciag, 0, ciag.length()-1);
	cout <<"Odwrocony ciag to:\n"<< ciag << endl;
	return 0;
}
