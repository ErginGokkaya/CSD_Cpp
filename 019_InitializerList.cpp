/*

#include <iostream>
#include <initializer_list>

using namespace std;

int main()
{
	initializer_list<int> il = {10, 20, 30, 40, 50};
	const int *pi1, *pi2;

	pi1 = il.begin();
	pi2 = il.end();

	while (pi1 != pi2) {
		cout << *pi1 << " ";
		++pi1;
	}
	cout << endl;
		
	return 0;
}
*/

#include <iostream>
#include <initializer_list>

int main()
{
	initializer_list<initializer_list<int>> ils  = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	for (initializer_list<int> il : ils) {
		for (int x : il)
			cout << x << " ";
		cout << endl;
	}
	
	return 0;
}