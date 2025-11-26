#include <iostream>

using namespace std;

class Sample {
public:
	int m_a;
	void foo();
protected:
	void bar();
private:
	int m_b;
	void tar();
};

void Sample::foo()
{
	cout << "Sample::foo" << endl;
}

void Sample::bar()
{
	cout << "Sample:bar" << endl;
}

void Sample::tar()
{
	cout << "Sample::tar" << endl;
}

int main()
{
	Sample s;

	s.foo();		// geçerli, foo public bölümde
	s.tar();		// geçersiz! tar private bölümde

	s.m_a = 10;		// geçerli, m_a public bölümde
	s.m_b = 20;		// geçersiz! m_b private bölümde

	s.bar();		// geçersiz! bar protected bölümde

	return 0;
}