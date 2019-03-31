/*
在同一行声明变量时，分开赋值
*/
#include <iostream>
using namespace std;
int main()
{
	int num = 0, weight = 0;
	cin >> num >> weight;
	int *list = new int[num]();
	for (int i = 0; i < num; ++i)
	{
		cin >> list[i];
	}
	int person = 0;
	int sum = 0;
	for (int i = 0; i < num; ++i)
	{
		if (sum >= weight){
			person++;
			sum = 0;
		}
		sum += list[i];
	}
	if (sum != 0)
	{
		person++;
	}
	cout << person <<endl;
	return 0;
}

/*
6 9
2 6 5 6 3 5
*/