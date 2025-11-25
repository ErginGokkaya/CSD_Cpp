#include <iostream>

using namespace std;

/*
void *foo()
{
	return NULL;
}

enum Color {
	Red, Green, Blue
};

int main()
{
	double a = 10.2;
	int val;
	int *pi;
	Color color;

	val = static_cast<int>(a);			// Zaten operatöre gerek yok
	pi = static_cast<int *>(foo());		// void *'dan diğer adres türlerine 
	color = static_cast<Color>(2);		// geçerli, static_cast bu dönüştürmeyi yapar
	
	return 0;
}

*/

/*
int main()
{
	int a = 10;
	const int *pci = &a;
	int *pi;

	pi = const_cast<int *>(pci);		// geçerli
	*pi = 20;
    *pci = 25;							// geçersiz, derleme hatası
	cout << a << endl;

	pi = (int *)pci;					// geçerli fakat kötü teknik!
	*pi = 30;

	cout << a << endl;

	return 0;
}
*/

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	unsigned char *pc;
	unsigned long addr;

	pc = a;											// error!
	pc = (unsigned char *)a;						// geçerli ama C++'ta kötü teknik
	pc = reinterpret_cast<unsigned char *>(a);		// iyi teknik

	addr = (unsigned long)a;						// geçerli ama C++'ta kötü teknik
	addr = reinterpret_cast<unsigned long>(a);		// geçerli ve iyi teknik

	return 0;
}