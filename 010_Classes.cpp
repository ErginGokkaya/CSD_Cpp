#include <iostream>

using namespace std;

/*
class Sample {
public:
	int a;
	int b;

	void foo();
	void bar();
};

void Sample::foo()
{
	cout << "Sample::foo" << endl;
}

void Sample::bar()
{
	cout << "Sample::bar" << endl;
}

void foo()
{
	cout << "global foo" << endl;
}

void bar()
{
	cout << "global bar" << endl;
}

int main()
{
	foo();		// global foo
	bar();		// global bar

	Sample s;		// s nesnesi Sample türünden

	s.foo();		// Sample sınıfının üye fonksiyonu olan foo
	s.bar();		// Sample sınıfının üye fonksiyonu olan bar

	return 0;                                                               
}
*/

class Sample {
public:
	Sample(int x);
	//...
};

Sample::Sample(int x)
{
	cout << "Sample(int): " << x << endl;
}

Sample x{100};
Sample y{200};

void foo()
{
	cout << "foo begins..." << endl;

	static Sample s{1000};

	cout << "foo ends..." << endl;
}

int main()
{
	cout << "main begins..." << endl;

	Sample s{10}, k{20};

	cout << "main continues..." << endl;

	Sample m{30};

	foo();
	foo();

	cout << "main ends..." << endl;
		
	return 0;
}

Sample z{300};