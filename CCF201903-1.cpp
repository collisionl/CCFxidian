/*
输出小数点精度：
printf("%.1f", exa);
%.(几位)f
%d ： 整数
*/
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
	double mid = 0;
	if (length % 2 == 0)
	{
		int t = length / 2;
		mid = (double)(list[t] + list[t - 1]) / 2;
		if (mid - (int)mid != 0)
		{
			printf("%d %.1f %d\n", list[length - 1], mid, list[0]);
		}else{
			cout << list[length - 1] << ' ' << mid << ' ' << list[0] << endl;
		}
	}else {
		mid = list[length / 2];
		cout << list[length - 1] << ' ' << mid << ' ' << list[0] << endl;
	}
	return 0;
}

/*
4
-2 -1 3 4
*/