/*

#include <iostream>
#include <vector>

using namespace std;

class A {
public:
	void foo();
	void bar();
	//...
};

class B : public A {
public:
	void tar();
};

void A::foo()
{
	cout << "A::foo" << endl;
}

void A::bar()
{
	cout << "A::bar" << endl;
}

void B::tar()
{
	cout << "B::tar" << endl;
}

int main()
{
	B b;

	b.foo();
	b.bar();
	b.tar();

	A a;

	a.foo();
	a.bar();

	return 0;
}

*/

/*
#include <iostream>

using namespace std;

class A {
public:
	void foo();
	int m_x;
protected:
	void bar();
	int m_y;
private:
	void tar();
	int m_z;
};

class B : public A {
public:
	void car();
	int m_k;
protected:
	void zar();
	int m_r;
private:
	void mar();
	int m_m;
};

void A::foo()
{
	cout << "A::foo" << endl;
}

void A::bar()
{
	cout << "A::bar" << endl;
}

void A::tar()
{
	cout << "A::tar" << endl;
}

void B::car()
{
	cout << "B::car" << endl;
	m_y = 300;							// geçerli
}

void B::zar()
{
	cout << "A::zar" << endl;
	bar();								// geçerli
}

void B::mar()
{
	cout << "B::mar" << endl;

	tar();								// geçersiz!
}

int main()
{
	B b;

	b.foo();			// geçerli
	b.m_x = 10;			// geçerli
	b.car();			// geçerli
	b.m_k = 20;			// geçerli

	return 0;
}

*/

#include <iostream>

using namespace std;

class K {
public:
	K(int k);
	~K();
	int k() const { return m_k; }
private:
	int m_k;
};

class A {
public:
	A(int x);
	~A();
	int x() const { return m_x; }
private:
	int m_x;
};

class B : public A {
public:
	B(int x, int y, int z);
	~B();
	int y() const { return m_y; }
private:
	int m_y;
	K m_k;
};

K::K(int k)
{
	m_k = k;
	cout << "K(int) constructor" << endl;
}

K::~K()
{
	cout << "K destructor" << endl;
}

A::A(int x)
{
	m_x = x;

	cout << "A(int) constructor" << endl;
}

A::~A()
{
	cout << "A destructor" << endl;
}

B::B(int x, int y, int z) : m_k(z), A(x)
{
	m_y = y;

	cout << "B(int, int) constructor" << endl;
}

B::~B()
{
	cout << "B destructor" << endl;
}

int main()
{
	B b{10, 20, 30};
		

	return 0;
}