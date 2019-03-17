#include <iostream>
using namespace std;

int cyfry(int n)
{
	if (n / 10 == 0)return n;
	else return n = n%10 + cyfry(n / 10);
}

int main() 
{
	int n;
	cout << "Wprowadz liczbe, ktorej sume cyfr chcesz obliczyc: ";
	cin >> n;
	cout << "Suma cyfr tej liczby wynosi: "<<cyfry(n)<<endl;
	return 0;
}
