#include <iostream>

using namespace std;

class Sample {
public:
	Sample(int a, int b);
	void disp();

	int m_a;
	int m_b;
};

Sample::Sample(int a, int b) : m_a{a}, m_b{b}
{}

void Sample::disp()
{
	cout << m_a << ", " << m_b << endl;
}

void foo(Sample *ps)
{
	ps->disp();
}

void bar(Sample &r)
{
	r.disp();
}

int main()
{
	Sample s{10, 20};

	foo(&s);
	bar(s);
	
	return 0;
}