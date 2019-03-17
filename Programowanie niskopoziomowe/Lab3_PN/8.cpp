#include<iostream>
using namespace std;

int length(int x)
{
	int l = 1;
	while (1)
	{
		if (x / 10 > 0)x /= 10;
		else return l;
		l++;
	}
}
int pow(int x, int y)
{
	if (y == 0)return 1;
	if (y == 1)return x;
	else return x = x*pow(x, --y);
}

void automorf(int a,int b)
{
	for (int i = a; i <= b; i++)
	{
		if ((i*i) % (pow(10, length(i))) == i)cout << i << "^2 = " << i*i<<endl;
	}
}

int main() {
	int a,b;
	cout << "Podaj liczby a i b, tak ze <a,b> jest przedzialem poszukiwania liczb automorficznych: ";
	cin >> a >> b;
	automorf(a,b);
	return 0;
}
