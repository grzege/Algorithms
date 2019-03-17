#include<iostream>
#include<conio.h>
using namespace std;

int Potega(int potega_przejsciowa, int potega, int liczba, int wynik)
{
if(potega_przejsciowa != potega)
{
int help = wynik;
for(int i=1; i<liczba; i++)
{
wynik += help;
}
potega_przejsciowa++;
wynik = Potega(potega_przejsciowa, potega, liczba, wynik);
}
return wynik;
}
int main()
{
int liczba, potega;
cout<<"Podaj liczbe ... "; cin>>liczba;
cout<<"Podaj potege ... "; cin>>potega;
int wynik = liczba;
int potega_przejsciowa = 1;
wynik = Potega(potega_przejsciowa, potega, liczba, wynik);
cout<<"Wynik = "<<wynik<<endl;
return 0;
}
