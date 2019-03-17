#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
using namespace std;
int s = 0;//licznik studentow w grupie

struct student
{
	string imie;
	string nazwisko;
	int nr_albumu;
	int ocena;
};

void New(student S[])
{
	cout << "Wprowadz imie: ";
	cin >> S[s].imie;
	cout << "Wprowadz nazwisko: ";
	cin >> S[s].nazwisko;
	cout << "Wprowadz nr albumu: ";
	cin >> S[s].nr_albumu;
	cout << "Wprowadz ocene: ";
	cin >> S[s].ocena;
	s++;
}
void Old(student S[],int i)
{
	cout << "Wprowadz imie: ";
	cin >> S[i].imie;
	cout << "Wprowadz nazwisko: ";
	cin >> S[i].nazwisko;
	cout << "Wprowadz nr albumu: ";
	cin >> S[i].nr_albumu;
	cout << "Wprowadz ocene: ";
	cin >> S[i].ocena;
}
void Info(student S[])
{
	cout << "Wpisz nazwisko lub nr albumu studenta, lub wpisz all aby wyswietlic informacje o kazdym studencie w bazie\n";
	string w;
	cin >> w;
	if (w == "all")
	{
		for (int i = 0; i < s; i++)
		{
			cout << "Imie: " << S[i].imie << endl;
			cout << "Nazwisko: " << S[i].nazwisko << endl;
			cout << "Nr albumu: "<< S[i].nr_albumu << endl;
			cout << "Ocena: "<<S[i].ocena << endl << endl;
		}
	}
	else for (int i = 0; i < s; i++)
	{
		int A = atoi(w.c_str());
		if (w == S[i].nazwisko)
		{
			cout << "Imie: " << S[i].imie << endl;
			cout << "Nazwisko: " << S[i].nazwisko << endl;
			cout << "Nr albumu: " << S[i].nr_albumu << endl;
			cout << "Ocena: " << S[i].ocena << endl << endl;
			cout << "Wcisnij dowolny klawisz aby kontynuowac.\n";
			_getch();
			break;
		}
		else if (A == S[i].nr_albumu)
		{
			cout << "Imie: " << S[i].imie << endl;
			cout << "Nazwisko: " << S[i].nazwisko << endl;
			cout << "Nr albumu: " << S[i].nr_albumu << endl;
			cout << "Ocena: " << S[i].ocena << endl << endl;
			cout << "Wcisnij dowolny klawisz aby kontynuowac.\n";
			_getch();
			break;
		}
	}
}
void Mod(student S[])
{
	cout << "Wpisz nazwisko lub nr albumu studenta, ktorego dane chcesz zmodyfikowac\n";
	string w;
	cin >> w;
	for (int i = 0; i < s; i++)
	{
		int A = atoi(w.c_str());
		if (w == S[i].nazwisko)
		{
			Old(S, i);
			break;
		}
		else if (A == S[i].nr_albumu)
		{
			Old(S, i);
			break;
		}
	}
}
void Avg(student S[])
{
	int sum=0,min,max;
	double avg;
	for (int i = 0; i < s; i++)
	{
		if (i == 0)
		{
			min = S[i].ocena;
			max = S[i].ocena;
			sum += S[i].ocena;
		}
		else
		{
			sum += S[i].ocena;
			if (min > S[i].ocena)min = S[i].ocena;
			if (max < S[i].ocena)max = S[i].ocena;
		}
	}
	avg = (double)sum / (double)s;
	cout << "Srednia ocen studentow wynosi: " << avg<<endl;
	cout << "Minimalna ocena w grupie studentow wynosi: " << min << endl;
	cout << "Maksymalna ocena w grupie studentow wynosi: " << max << endl;
	cout << "Wcisnij dowolny klawisz aby kontynuowac.\n";
	_getch();
}
int main()
{
	int n;
	cout << "Witaj w programie Studenci! Podaj liczbe studentow w grupie: ";
	cin >> n;
	student *S = new student[n];
	char w;
	while (1)
	{
		cout << "Wcisnij:\nn - dodaj nowego studenta do bazy\ni - aby wyswietlic informacje o studentach\n";
		cout<< "m - aby zmodyfikowac dane wybranego studenta\ns - aby wyswietlic informacje o ocenach grupy\n";
		cout<< "u - aby usunac informacje o calej grupie studentow\nk - koniec programu\n";
		w = _getch();
		switch (w)
		{
		case 'n':
			if(s<n)New(S);
			else cout << "Baza osiagnela maksimum studentow.\n";
			break;
		case 'm':
			if (s>0)Mod(S);
			else cout << "W bazie studentow nie ma jeszcze zadnych danych.\n";
			break;
		case 'i':
			if(s>0)Info(S);
			else cout << "W bazie studentow nie ma jeszcze zadnych danych.\n";
			break;
		case 's':
			if (s > 0)Avg(S);
			else cout << "W bazie studentow nie ma jeszcze zadnych danych.\n";
			break;
		case 'u':
			s = 0;//ustawia licznik studentow na 0, kolejne wprowadzane dane beda zastepywaly poprzednie
			break;
		case 'k':
			cout << "Koniec programu.\n";
			delete[] S;
			exit(0);
			break;
		default:
			cout << "Wprowadzono bledny znak.\n";
			break;
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
}


