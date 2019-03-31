/*
sort 二维数组中的一行：sort(list[i],list[i] + 此行长度);
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int list[100][1000] = {0};
	int rowcount[100] = {0};
	for (int i = 0; i < 100; ++i)
	{
		int a = 0;
		cin >> a;
		if (a == 0) break;
		rowcount[i] = a;
		for (int j = 0; j < a; ++j)
		{
			cin >> list[i][j];
		}
	}
	for (int i = 0; list[i][0] != 0; ++i)
	{
		sort(list[i],list[i] + rowcount[i]);
	}

	for (int i = 0; list[i][0] != 0; ++i)
	{
		int fix = list[i][0] - list[i][1];
		for (int j = 1; j < rowcount[i] - 1; ++j)
		{
			if ((list[i][j] - list[i][j + 1]) != fix){
				cout<< "No" << endl;
				break;
			}
			if (j == rowcount[i] - 2)
			{
				cout<< "Yes" << endl;
			}
		}

	}
	return 0;
}

/*
6
23 15 4 18 35 11
3 
3 1 2
10
1 2 3 4 5 6 7 8 9 10
10
10 9 8 7 6 5 4 3 2 1
5
2 4 6 8 10
4
12 2 2 3
0

	// cout list
	for (int i = 0; list[i][0] != 0; ++i)
	{
		for (int j = 0; j < rowcount[i]; ++j)
		{
			cout << list[i][j] << ' ';
		}
		cout << endl;
	}
*/