/*
变长数组
*/
#include <iostream>
using namespace std;
int cal(int n){
	const int a[] = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
	int sum = 0;
	for (int i = 0; i < 9; ++i)
	{
		sum = sum + (n % a[i]) / (a[i] / 10);
	}
	return sum;
}
int main()
{
	int list[1000];
	memset(list, 0, 1000);
	int a, num = 0;
	while (cin >> a) {
		if (a == 0) break;
		list[num] = a;
		num++;
	}
	int *result = new int[num];
	memset(result, 0, num);
	for (int i = 0; list[i] != 0; ++i)
	{
		result[i] = cal(list[i]);
	}
	sort(result,result + num);
	for (int i = 0; i < num; ++i)
	{
		cout << result[i] << ' ';
	}
	cout << endl;
	delete []result;
	return 0;
}

/*
497 1069 68 71 127 0
*/