#include <iostream>
using namespace std;
int sum(int);
int main()
{
	//task 1:
	int n;
	cin >> n;
	int first = 1, second = 1, third=2;
	for (int i = 3; i <= n; i++)
	{
		third = first + second;
		first = second;
		second = third;
	}
	cout << third<<'\n';
	//task 2:
	cin >> n;
	while (n > 0)
	{
		cout << n % 10;
		n /= 10;
	}
	cout << '\n';
	//task 3:
	cin >> n;
	bool prime = true;
	for (int i = 2; i < n; ++i)
	{
		if (n%i == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime) cout << "yes\n";
	else cout << "no\n";
	//task 4:
	cin >> n;
	int br=0, n1=n;
	for (br = 0; n1 > 0; br++)
	{
		n1 /= 10;
	}
	for (int i=1; n > 0; ++i)
	{
		if (br % 2 == 1 && i % 2 == 0) cout << n % 10 << " ";
		else if (br % 2 == 0 && i % 2 == 1) cout << n % 10 << " ";
		n /= 10;
	}
	cout << '\n';
	// task 5:
	for (int a = 1; a < 10; ++a)
	{
		for (int b = 0; b < 10; ++b)
		{
			for (int c = 0; c < 10; ++c)
			{
				if (a + b + c > 9 && a + b + c < 100)
				{
					cout << a << b << c<<" ";
				}
			}
		}
	}
	cout << '\n';
	//task 6:
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (n%i == 0)
		{
			cout<<i<<" ";
		}
	}
	cout << '\n';
	//task 7:
	cin >> n;
	char a;
	cin >> a;
	double result = n;
	while (a != '=')
	{
		cin >> n;
		if (a == '+') result += n;
		else if (a == '-') result -= n;
		else if (a == '*') result *= n;
		else result /= n;
		cin >> a;

	}
	cout << result<<'\n';
	//task 8:
	cin >> n;
	int i = 1;
	cin >> n1;
	result = n1 * pow(10, n-1);
	if (n1 == 0)
	{
		int k = 0;
		cin >> n1;
		++i;
		result = n1 * pow(10, n-1);
	}
	for (i; i < n; ++i)
	{
		cin >> n1;
		result += n1 * pow(10, n - i -1);
	}
	cout << result << '\n';
	//task 9:
	for (int p = 65; p < 123; ++p)
	{
		if (p > 90 && p < 97) continue;
		cout << p << " => " << (char)p<<endl;
	}
	//task 10:
	cin >> n;
	cout << sum(n);
	return 0;
}
int sum(int a)
{
	int result1 = 0;
	while (a > 0)
	{
		result1 += a % 10;
		a /= 10;
	}
	return result1;
}