#include<iostream>
using namespace std;


int silnia(int x)
{
	if (x == 0)return 1;
	if (x == 1)return 1;
	else return x = x*silnia(x-1);
}

int main() {
	int n;
	cout << "Podaj liczbe naturalna stanowiaca dla ktorej chcesz obliczyc silnie: ";
	cin >> n;
	cout << n << "!" << " = " << silnia(n) << endl;
	return 0;
}
