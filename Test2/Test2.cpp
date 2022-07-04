#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int Foo(int n, int a, int s)
{
	
	if (a == n)
	{
		return n;
	}
	else 
	{
		a = a + s;
		cout << a << endl;
		return Foo(n, a, s);
	}

}

int main()
{
	
	int a = 0;
	int s;
	int n;
	cin >> n;
	cin >> s;
	Foo(n, a, s);

	return 0;
}