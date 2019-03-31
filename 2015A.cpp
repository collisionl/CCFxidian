/*
二维数组保存输入数据
memset(list, 0, sizeof(list));
*/
#include <iostream>
#include <cmath>
using namespace std;
bool test(int num){
	if (num == 1) return false;
	if (num == 2) return true;
	int max = sqrt(num);
	for (int i = 2; i <= max; ++i)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int list[10][100];
	memset(list, 0, sizeof(list));
	int num = 0;
	int row = 0;
	while(cin >> num){
		if (num == 0) break;
		for (int i = 0; i < num; ++i)
		{
			cin >> list[row][i];
		}
		row++;
	}
	//输出二维数组
	// for (int i = 0; i < row; ++i)
	// {
	// 	for (int j = 0; j < 100; ++j)
	// 	{
	// 		cout << list[i][j] << ' ';
	// 	}
	// 	cout << endl;
	// }
	for (int i = 0; i < row; ++i)
	{
		int sum = 0;
		for (int j = 0; list[i][j] != 0; j++){
			if (test(list[i][j])) sum = sum + list[i][j];
		}
		cout << sum << endl;
	}
	return 0;
}

/*
4 1 2 3 4
5 1 2 3 4 5
0

5 1 2 3 4 5
3 3 3 3
5 4 4 4 4 17
2 1 23
0
*/