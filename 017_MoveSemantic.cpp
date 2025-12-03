/*
	Bir sınıfın sınıf ismi T olmak üzere aşağıdaki parametre yapısına sahip yapıcı fonksiyonlarına "taşıma yapıcı fonksiyonları (move constructors)" denilmektedir:
	
	- T && 
	- const T &&
	- volatile T &&
	- const volatile T &&
*/

#include <iostream>
#include "String.h"

using namespace std;
using namespace CSD;

class Student {
public:
	Student(const String &name, int no) : m_name(name), m_no(no)
	{}
	Student(String &&name, int no) : m_name(move(name)), m_no(no)
	{}

	String name() const { return m_name; }
	int no() const { return m_no; }

	void disp() const;
private:
	String m_name;
	int m_no;
};

void Student::disp() const
{
	cout << m_name.c_str() << ", " << m_no << endl;
}

int main()
{
	String name{"Ali Serce"};
	int no = 123;

	name.disp();
	cout << no << endl;

	Student student(move(name), no);	// name nesnesinin kaynakları çalınarak student nesnesinin m_name elemanına aktarılmıştır

	student.disp();

	return 0;
}