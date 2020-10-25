#include <iostream>
using namespace std;
int main()
{
	cout << "2+2 = ";
	int x;
	int money = 0;
	cin >> x;
	switch (x)
	{
	case 4:
		cout << "You win 100lv.\n";
		money = 100;
		cout << "2.2 = ";
		cin >> x;
		if (x == 4)
		{
			cout << "You win 100lv.\n";
			money = 200;
			cout << "2.2.2 = ";
			cin >> x;
			if (x == 8)
			{
				cout << "You win 100lv.\n";
				money = 300;
			}
			else {
				cout << "Not correct... You lose\n";
				break;
			}
		}
		else {
			cout << "Not correct... You lose\n";
			break;
		}
		break;
	default:
		cout << "Not correct... You lose\n";
		break;
	}
	cout << "The end... You won " << money << "lv.\n";
	return 0;
}