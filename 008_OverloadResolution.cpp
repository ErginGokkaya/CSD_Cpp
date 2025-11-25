#include <iostream>

using namespace std;

/*
void foo(int a, int b)          // 1
{
    cout << "int, int" << endl;
}

void foo(double a, int b)       // 2
{
    cout << "double, int" << endl;
}

void foo(long a, long b)    // 3
{
    cout << "long, long" << endl;
}

int main()
{
    foo('a', 3.2);   // int, int
    foo('a', 'b');   // int, int
	foo(3.2, 10L);   // ambiguity error

    return 0;
}
*/

/*
void foo(int &r)                // 1
{
    cout << "int &" << endl;
}

void foo(const int &r)          // 2
{
    cout << "const int &" << endl;
}

int main()
{
    int a{10};

    foo(a);         // 2

    return 0;
}
*/

void foo(int &r)                // 1
{
    cout << "int &" << endl;
}

void foo(int a)          		// 2
{
    cout << "int" << endl;
}

int main()
{
    int a = 10;
    
    foo(a);     // ambiguity error!
    foo(10);    // 2 seçilir çünkü 1 uygun fonksiyon değil

    return 0;
}