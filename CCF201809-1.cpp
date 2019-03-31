#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int *list = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> list[i];
	}
	int *result = new int[n];
	result[0] = (list[0] + list[1]) / 2;
	result[n - 1] = (list[n - 1] + list[n - 2]) / 2;
	for (int i = 1; i < n - 1; ++i)
	{
		result[i] = (list[i - 1] + list[i] + list[i + 1]) / 3;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << result[i] << ' ';
	}
	cout << endl;
	delete []list;
	delete []result;
	return 0;
}

/*
8
4 1 3 1 6 5 17 9
*/