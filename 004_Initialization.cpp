#include <iostream>

using namespace std;

int main()
{
    int a = 10;
	int a(10);		// C++'a özgü, C'de böyle bir ilkdeğer verme sentaksı yok
	int b();		// bu ilkdeğer verme sentaksı değil! Fonksiyon prototipi
	const char *name("ali");
	int a[3](10, 20, 30); // C++20 ile gelen dizi ilkdeğer verme sentaksı

    // Uniform Initializer Syntax (C++11 ile gelen).. narrowing conversions engellenir
	int a{10};
	const char *b{"ali"};
	int c[]{1, 2, 3};
	int d{};				// d = 0

    int a{10.2};			// geçersiz!
	int b = 10.2;			// geçerli
	int c[]{1, 2, 3.4, 5};	// geçersiz!

	long d{100};			// geçerli
	int e{d};				// geçersiz

	return 0;
}