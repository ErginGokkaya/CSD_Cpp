#include <iostream>

using namespace std;

struct Sample {
	//...
	int m_a;
	int m_b;
	static int m_c;
};

int Sample::m_c = 10;

int main()
{
	cout << Sample::m_c << endl;		// 10
	Sample::m_c = 20;					// 20
	cout << Sample::m_c << endl;		// 20

	Sample s;

	cout << sizeof(s) << endl;		// int 4 byte ise 8
	s.m_c = 30;						// s.m_c ile decltype(s)::m_c aynı anlamdadır.
	cout << Sample::m_c << endl;	// 30

	return 0;
}