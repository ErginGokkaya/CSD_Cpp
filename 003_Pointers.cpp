#include <iostream>

using namespace std;

/*
int main()
{
	int a[10];
	void *pv;
	double *pd;

	pv = a;		// hem C'de hem C++'ta geçerli
	pd = pv;	// C'de geçerli, C++'ta geçersiz

	pd = (double *)pv;					// geçerli 

	return 0;
}
*/

int main()
{
	const char *str = "ankara";

	cout << str << endl;

	return 0;
}