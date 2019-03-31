/*
new出的数组初始化为0的操作：
int *count = new int[length]();
*/
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	int length = 0;
	cin >> length;
	int *list = new int[length];
	int *count = new int[length]();
	for (int i = 0; i < length; ++i)
	{
		cin >> list[i];
	}
	sort(list, list + length);
	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length; ++j)
		{
			if(list[i] == list[j]){
				count[i]++;
			}
		}
	}
	int max = 0;
	int seq = 0;
	for (int i = 0; i < length; ++i)
	{
		if(count[i] > max){
			max = count[i];
			seq = i;
		}
	}
	cout << list[seq] << endl;
	delete []list;
	delete []count;
	return 0;
}

/*
6
1 1 1 1 3 2
*/