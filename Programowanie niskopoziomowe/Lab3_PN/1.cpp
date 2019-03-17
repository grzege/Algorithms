#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;
int p=0;

struct pracownik
{
	string nazwisko;
	int pensja;
	int premia;	
};

void N(pracownik P[])
{
	cout<<"Wprowadz nazwisko: ";
	cin>>P[p].nazwisko;
	cout<<"Wprowadz pensje: ";
	cin>>P[p].pensja;
	cout<<"Wprowadz procent premii: ";
	cin>>P[p].premia;
	p++;
}
void Pen(pracownik P[])
{
	string n;
	cout<<"Wprowadz nazwisko: ";
	cin>>n;
	for(int i=0;i<p;i++)
	{
		if(P[i].nazwisko==n)
		{
			cout<<"Wprowadz nowa wartosc pensji: ";
			cin>>P[i].pensja;
			break;
		}
	}
}
void R(pracownik P[])
{
	string n;
	cout<<"Wprowadz nazwisko: ";
	cin>>n;
	for(int i=0;i<p;i++)
	{
		if(P[i].nazwisko==n)
		{
			cout<<"Wprowadz nowa wartosc premii: ";
			cin>>P[i].premia;
			break;
		}
	}
}
void W(pracownik P[])
{
	int sum=0;
	for(int i=0;i<p;i++)
	{
		sum+=(P[i].pensja+((P[i].pensja*P[i].premia)/100));
	}
	cout<<"Na wyplate wszystkich pensji i premii potrzeba bedzie "<<sum<<" zlotych.\n";
	cout << "Wcisnij dowolny klawisz aby kontynuowac.\n";
	getch();
}
int main()
{
	pracownik P[10];
	char w;
	while(1)
	{
		cout<<"Witaj w programie Pracownicy! Wcisnij:\nn - dodaj nowego pracownika\n";
		cout<<"p - zmien wartosc pensji\nr - zmien wartosc procentu premii\nw - pokaz wyplate\nk - koniec programu\n";
		w=getch();
		switch(w)
		{
			case 'n':
				N(P);
				break;
			case 'p':
				Pen(P);
				break;
			case 'r':
				R(P);
				break;
			case 'w':
				W(P);
				Sleep(200);
				break;
			case 'k':
				cout<<"Koniec programu.";
				exit(0);
				break;
			default:
				cout<<"Wprowadzono bledny znak.\n";
				break;
		}
	Sleep(1000);
	system("cls");
	}
	return 0;
}
