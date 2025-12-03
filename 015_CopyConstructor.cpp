// Bir sınıfın kopya yapıcı (copy constructor) fonksiyonu, o sınıfın bir nesnesi oluşturulurken başka bir nesneden kopyalanması gerektiğinde çağrılır. Derleyicinin yazdığı varsayılan kopya yapıcı, üye değişkenlerin yüzeysel (shallow) kopyasını yapar. Ancak, eğer sınıf dinamik bellek yönetimi yapıyorsa (örneğin, bir karakter dizisi için dinamik bellek ayırıyorsa), bu durum sorunlara yol açabilir. Çünkü iki nesne aynı bellek alanını paylaşır ve biri silindiğinde diğeri geçersiz bir bellek alanına işaret eder. Bu nedenle, derleyicinin yazdığı varsayılan kopya yapıcıyı geçersiz kılmak (override) ve derin (deep) kopya yapan bir kopya yapıcı tanımlamak önemlidir.

/* Copy Constructor Example:
     const T &
	 T &
	 volatile T &
	 const volatile T &
*/

/*
#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
	String(const char *str); // Parameterized Constructor
	~String();
	String(const String &r); // Copy Constructor
	void disp() const;
	
private:
	char *m_str;
	size_t m_size;
};

String::String(const char *str)
{
	m_size = strlen(str);
	m_str = new char[m_size + 1];

	strcpy(m_str, str);
}

String::String(const String &r)
{
	m_str = new char[r.m_size + 1]; // Deep Copy
	strcpy(m_str, r.m_str);
	m_size = r.m_size;
}

String::~String()
{
	delete[] m_str;
}

void String::disp() const
{
	cout << m_str << endl;
}

void foo(String k)			// String k = s
{
	k.disp();
}

int main()
{
	String s{"ankara"};
    
    String t = s; // Copy Constructor çağrılır
    t.disp();

	foo(s); // Copy Constructor çağrılır

	s.disp();

	return 0;
}

*/

/*
#include <iostream>

using namespace std;

class Sample {
public:
	Sample(int a) : m_a(a)
	{
		cout << "int constructor" << endl;
	}

	Sample(const Sample &r) : m_a(r.m_a)
	{
		cout << "copy constructor" << endl;
	}
	~Sample()
	{
		cout << "destructor" << endl;
	}

	int a() const { return m_a; }


private:
	int m_a;
};

Sample foo()
{
	cout << "foo" << endl;

	return Sample(10);
}

int main()
{
	Sample s = Sample(foo());		// Sample s(10);
	
	return 0;
}
*/

#include <iostream>

using namespace std;

class Sample {
public:
	Sample(int a) : m_a(a)
	{
		cout << "int constructor" << endl;
	}

	Sample(const Sample &r) : m_a(r.m_a)
	{
		cout << "copy constructor" << endl;
	}
	~Sample()
	{
		cout << "destructor" << endl;
	}

	int a() const { return m_a; }


private:
	int m_a;
};

Sample foo()
{
	Sample s(10);

	cout << "foo" << endl;

	return s;			// burada geri dönüş değeri için kopya yapıcı fonksiyonun çağrılıp çağrılmayacağı derleyicileri yazanların isteğine bırakılmıştır
}

int main()
{
	Sample s{foo()};		
	
	return 0;
}