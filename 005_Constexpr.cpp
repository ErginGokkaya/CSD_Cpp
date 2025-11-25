#include <iostream>

using namespace std;
/*
constexpr int SIZE = 10;

int main()
{
	int a[SIZE];						// geçerli, SIZE bir sabit ifadesi

	constexpr int AA = SIZE + 2;		// geçerli, SIZE + 2 bir sabit ifadesi

	int b = 10;
	constexpr int CC = b + 2;			// geçersiz! b + 2 bir sabit ifadesi değil

	return 0;
}
*/
constexpr int square(int a)
{
	return a * a;
}

int main()
{
	int a[square(10)];		// geçerli, burada square(10) çağrısı sabit ifadesi belirtiyor
	int b{10};
	int c[square(b)];		// geçersiz artık square bir sabit ifadesi belirtimiyor
	
	return 0;
}