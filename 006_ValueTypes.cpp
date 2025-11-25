#include <iostream>

using namespace std;

// lvalue ve rvalue ifadeleri
// lvalue: bellekte bir adresi olan ifadeler
// rvalue: bellekte bir adresi olmayan, geçici ifadeler
// prvalue: geçici olmayan rvalue ifadeleri
// xvalue: geçici olan rvalue ifadeleri

/*
int main()
{
    int x = 10;          // x bir lvalue, 10 bir prvalue
    int y = x + 5;      // x bir lvalue, x + 5 bir prvalue

    int &&z = x + 20;   // x + 20 bir xvalue

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    return 0;
}
*/
/*
int main()
{
	double d = 3.14;
	int &&r = d;

	cout << r << endl;		// 3

	r = 10;

	cout << d << endl;		// 3.14
	cout << r << endl;		// 10

	return 0;
}

*/

void foo(int &&r)
{
	cout << r << endl;
}

int main()
{
	int a = 10, b = 20;

	foo(10);			// geçerli
	foo(a + b);			// geçerli

	foo(a);				// geçersiz!
	
	return 0;
}