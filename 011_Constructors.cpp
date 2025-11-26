#include <iostream>

using namespace std;

    /*
	class Sample {
	public:
		Sample();
		void disp();
	public:
		int a = 10;

		//...
	};

	Sample::Sample() : a(100)
	{}

	void Sample::disp()
	{
		cout << a << endl;
	}

	int main()
	{
		Sample s;

		s.disp();			// 100

		return 0;
	}

    */

/*
class Sample {
public:
	Sample();
	Sample(int x);
	Sample(int x, int y);
	void disp();

	int a;
	int b;
	//...
};

Sample::Sample() : Sample(10, 20)
{
	cout << "default constructor" << endl;
}

Sample::Sample(int x) : Sample(x, 10)
{
	cout << "int constructor" << endl;
}

Sample::Sample(int x, int y) 
{
	// ortak yapılması gereken şeyler

	cout << "common codes..." << endl;

	cout << "int, int constructor" << endl;

	a = x;
	b = y;
}

void Sample::disp()
{
	cout << a << ", " << b << endl;
}

int main()
{
	Sample s;
	Sample k(10);

	s.disp();
	k.disp();

	return 0;
}
*/

/*
class Sample {
public:
	Sample(int x);
	~Sample();

	int a;
};

Sample::Sample(int x) : a(x)
{
	cout << "int constructor: "  << a << endl;
}

Sample::~Sample()
{
	cout << "destructor: " << a << endl;
}

void foo()
{
	cout << "foo begins..." << endl;

	static Sample s(50);
	
	cout << "foo ends..." << endl;
}

Sample s(10), k(20), m(30);

int main()
{
	cout << "main begins..." << endl;

	Sample x(100), y(200);

	{
		cout << "nested block begins..." << endl;

		Sample r(1000), z(2000);

		cout << "nested block ends..." << endl;
	}
	
	foo();
	foo();

	cout << "main ends..." << endl;

	return 0;
}

*/

class Sample {
public:
	void disp();

	int m_a;
	int m_b;
};

void Sample::disp()
{
	cout << m_a << ", " << m_b << endl;
}

int main()
{
	auto ps1 = new Sample;

	ps1->disp();		// dikkat çöp değerler

	auto ps2 = new Sample();

	ps2->disp();		// sıfır değerleri 

	delete ps2;
	delete ps1;

	return 0;
}