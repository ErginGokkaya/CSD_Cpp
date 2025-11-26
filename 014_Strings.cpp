#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
	string s("ankara"), k("eskisehir");

	s.append("izmir");			// 1
	s.append(k);				// 2
	s.append(10, 'x');			// 3
	s.append("erzurum", 3);		// 4
	s.append(k, 3, 2);			// 5

	cout << s << endl;

	s += k;

	cout << s << endl;		// ankaraizmir (1)

	s += 'x';

	cout << s << endl;		// ankaraizmirx (2)

	s += "istanbul";

	cout << s << endl;		// ankaraizmirxistanbul (2)

	return 0;
}

*/
/*
int main()
{
	string s{"istanbul"}, k{"ankara"}, m{"izmir"}, r{"edirne"};
	
	s.replace(2, 3, k);							// 1

	cout << s << endl;							// isankarabul 

	k.replace(2, 3, m, 2, 2);					// 2

	cout << k << endl;							// anmia

	m.replace(0, 2, "kastamonu", 3);			// 3

	cout << m << endl;							// kasmir			

	r.replace(1, 3, 5, 'x');					// 4

	cout << r << endl;							// exxxxxne

	return 0;
}

*/

	int main()
	{
		string s{ "ankawa" };
		string::size_type result;

		if ((result = s.find("awalik", 2, 3)) == string::npos)
			cout << "cannot find" << endl;

		else
			cout << "found: " << result << endl;

		return 0;
	}