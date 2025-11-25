#include <iostream>

using namespace std;

/*
namespace CSD
{
    namespace A
    {
        void foo()
        {
            cout << "A::foo" << endl;
        }
    }
}

namespace A
{
    void bar()
    {
        cout << "A::bar" << endl;
    }
}

int main()
{
    CSD::A::foo();
    A::bar();

    return 0;
}

*/

namespace A
{
	namespace B
	{
		void foo();
		void bar();
		void tar();
		//...

		void foo()
		{
			cout << "A::B::foo" << endl;
		}
	}

	void B::bar()
	{
		cout << "A::B::bar" << endl;
	}
}

void A::B::tar()
{
	cout << "A::B::tar" << endl;
}

int main()
{
	A::B::foo();
	A::B::bar();
	A::B::tar();

	return 0;
}