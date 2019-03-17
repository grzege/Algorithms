#include <iostream>
using namespace std;

void heapify(int H[], int size, int a)
{
	int largest = a;
	int pom;
	if (2 * a <= size && H[2 * a] > H[largest])
		largest = 2 * a;
	if (2 * a + 1 <= size && H[2 * a + 1] > H[largest])
		largest = 2 * a + 1;

	if (largest != a)
	{
		pom = H[largest];
		H[largest] = H[a];
		H[a] = pom;
		heapify(H, size, largest);
	}
}
void build_heap(int H[], int size)
{
	for (int i = size / 2; i>0; i--)
		heapify(H, size, i);
}
void heap_sort(int H[], int size)
{
	int pom;
	build_heap(H, size);
	{
		for (int i = size; i>1; i--)
		{
			pom = H[i];
			H[i] = H[1];
			H[1] = pom;
			size--;
			heapify(H, size, 1);
		}
	}
}

int main()
{
	int n;
	cout << "Wprowadz ile elementow chcesz posortowac algorytmem HS: ";
	cin >> n;
	cout << "Wprowadz liczby do tablicy:\n";
	int *tab = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}
	cout << "Oryginalna tablica:\n";
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " , ";
	}
	heap_sort(tab, n-1);
	cout << "\nPosortowana tablica:\n";
	for (int i = 0; i < n; i++)
	{
		cout << tab[i]<<" , ";
	}
    return 0;
}


