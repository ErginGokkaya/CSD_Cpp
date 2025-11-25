#include <iostream>

using namespace std;

/*
int main()
{
	for (int i = 0; i < 10; ++i)
		for (int i = 0; i < 10; ++i)
			cout << i << endl;		// Buradaki i iç for döngüsündeki i, diğer i'ye erişemeyiz
	
	return 0;
}
*/


int main()
{
	for (int i = 0, k = 100; i + k > 50; ++i, k -= 2)
		cout << i << ", " << k << endl;

	return 0;
}