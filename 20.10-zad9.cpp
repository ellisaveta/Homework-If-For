#include <iostream>
using namespace std;
int main()
{
	int x1, y1, x2, y2, x, y;
	int far;
	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
	if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
	{
		cout << 0 << '\n';
		return 0;
	}
	far = (x - x2)*(x - x2) + (y - y2)*(y - y2);
	cout << far;
	return 0;
}
