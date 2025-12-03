/*
#include <iostream>
#include <vector>

using namespace std;

class Sample {
public:
	Sample() : m_val(0)
	{}
	Sample(int val) : m_val(val)
	{
		cout << "Sample constructor" << endl;
	}
	Sample(const Sample &r) : m_val(r.m_val)
	{
		cout << "copy constructor" << endl;
	}
	~Sample()
	{
		cout << "destructor" << endl;
	}
	int val() const { return m_val; }

private:
	int m_val;
};

int main()
{
	vector<int> a(10, 100);

	for (int x : a)
		cout << x << " ";
	cout << endl;

	vector<int> b = {10, 20, 30, 40, 50};

	for (int x : b)
		cout << x << " ";
	cout << endl;

	Sample s{10};

	vector<Sample> c(10, s);

	for (Sample &x : c)
		cout << x.val() << " ";
	cout << endl;

	return 0;
}

*/


/*
#include <iostream>
#include <vector>

using namespace std;

class Sample {
public:
	Sample() : m_val(0)
	{
		cout << "Sample default constructor" << endl;
	}
	Sample(int val) : m_val(val)
	{
		cout << "Sample int constructor" << endl;
	}
	Sample(const Sample &r) : m_val(r.m_val)
	{
		cout << "copy constructor" << endl;
	}

	Sample(const Sample &&r) noexcept : m_val(r.m_val)
	{
		cout << "move constructor" << endl;
	}

	~Sample()
	{
		cout << "destructor" << endl;
	}
	int val() const { return m_val; }

private:
	int m_val;
};

int main()
{
	vector<Sample> v;
	Sample s{10};

	v.push_back(s);				// ekleme kopya yapıcı fonksiyonu yoluyla yaılmaktadır
	v.push_back(move(s));		// ekleme taşıma yapıcı fonksiyonu yoluyla yazılmaktadır
		
	return 0;
}

*/
/*
#include <iostream>
#include <vector>

using namespace std;

class Sample {
public:
	Sample(int a, int b) : m_a(a), m_b(b)
	{
		cout << "Sample int constructor" << endl;
	}

	Sample(const Sample &r) : m_a(r.m_a), m_b(r.m_b)
	{
		cout << "copy constructor" << endl;
	}

	Sample(const Sample &&r) noexcept : m_a(r.m_a), m_b(r.m_b)
	{
		cout << "move constructor" << endl;
	}

private:
	int m_a;
	int m_b;
};

int main()
{
	vector<Sample> x;
	
	x.push_back(Sample(10, 20));		
	
	cout << "------------" << endl;

	vector<Sample> y;

	y.emplace_back(10, 20);

	return 0;
}

*/

#include <iostream>
#include <vector>

using namespace std;

class Sample {
public:
	Sample(int a) : m_a(a)
	{
		cout << "Sample int constructor" << endl;
	}

	Sample(const Sample &r) : m_a(r.m_a)
	{
		cout << "copy constructor" << endl;
	}

	Sample(const Sample &&r) noexcept  : m_a(r.m_a)
	{
		cout << "move constructor" << endl;
	}

	Sample & operator =(const Sample &r)
	{
		m_a = r.m_a;
		
		cout << "copy assignment operator" << endl;

		return *this;
	}

	Sample & operator =(const Sample &&r) 
	{
		m_a = r.m_a;

		cout << "move assignment operator" << endl;
		
		return *this;
	}

	int a() const { return m_a; }

private:
	int m_a;
};

int main()
{
	vector<Sample> v = {Sample(10), Sample(20), Sample(30), Sample(40), Sample(50)};
	
	for (Sample &s : v)
		cout << s.a() << " ";
	cout << endl;

	cout << "------------------------" << endl;

	v.insert(v.begin() + 2, Sample(100));

	for (Sample &s : v)
		cout << s.a() << " ";
	cout << endl;

	return 0;
}