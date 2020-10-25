#include <iostream>
using namespace std;
int main()
{
	//task 1 and 2:
	short a, b;
	cin >> a >> b;
	cout << a + b << '\n';
	cout << a - b << '\n';
	if (a != 0 && b != 0)
	{
		cout << a * b << '\n';
	}
	if (b != 0)
	{
		cout << a % b << '\n';
		cout << a / b << '\n';

	}
	if(a!=0 && b!=0)
	{
		a = a + b;
		b = a - b;
		a = a - b;
		cout << a << " " << b << '\n';

	}
	//taks 3:
	short x, j, k, l, o;
	cin >> x;
	j = x / 1000;
	k = x % 1000 / 100;
	l = x % 100 / 10;
	o = x % 10;
	cout << j << " " << k << " " << l << " " << o << '\n';
	//task 4:
	double c, d;
	cin >> c >> d;
	cout << c/ d<<'\n';
	//task 6 and 7:
	cin >> f >> g;
	bool prime = true;
	if (f >= g)
	{
		cout << f << '\n';
		for (int i = 2; i < f; i++)
		{
			if (f%i == 0 && g%i == 0)
			{
				prime = false;
			}
		}
	}
	else
	{
		cout << g << '\n';
		for (int i = 2; i < g; i++)
		{
			if (f%i == 0 && g%i == 0)
			{
				prime = false;
			}
		}
	}
	if(prime) cout << "true\n";
	else cout << "false\n";
	//task 8:
	int e1, e2, e3, pom;
	cin >> e1 >> e2 >> e3;
	if (e1 > e2)
	{
		swap(e1, e2);
	}
	if (e1 > e3) 
	{
		swap(e1, e3);
	}
	if (e2 > e3)
	{
		swap(e2, e3);
	}
	cout << e1 << " " << e2 << " " << e3 << '\n';
	return 0;
}