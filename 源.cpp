#include <iostream>
using namespace std;


// / <2.7>
int fun1(int n)
{
	int answ = 1;
	for (int i = 2; i < n; i++)
	{
		answ *= i;
	}
	return answ * n;
}

int main(void)
{
	cout << fun1(4) << endl;
	cout << fun1(3) << endl;
	cout << fun1(2) << endl;
	cout << fun1(1) << endl;
	return 0;
}