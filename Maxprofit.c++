#include <iostream>
using namespace std;

int main()
{
	int price[]={1,2,3,4,5};
	int n=5;

	int profit = 0;
	for (int i = 1; i < n; i++)
	{
		int sub = price[i] - price[i - 1];
		if (sub > 0)
			profit += sub;
	}

	cout << profit;
	return 0;
}
