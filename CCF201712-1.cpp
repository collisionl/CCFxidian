#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int length = 0;
	cin >> length;
	int *list = new int[length];
	for (int i = 0; i < length; ++i)
	{
		cin >> list[i];
	}
	sort(list, list + length);
	int min = list[length - 1] - list[length - 2];
	for (int i = 0; i < length - 1; ++i)
	{
		int temp = list[i + 1] - list[i];
		if (temp < min){
			min = temp;
		}
	}
	cout << min << endl;
	delete []list;
	return 0;
}

/*
5
1 5 4 8 20
*/