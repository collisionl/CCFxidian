/*
algorithm写法
sort函数：
sort(首地址, 尾地址)			默认升序
sort(首地址, 尾地址, less<int>());	升序
sort(首地址, 尾地址, greater<int>()); 降序
见sort.cpp文件
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int list[1000];
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> list[i];
	}
	sort(list, list + num);
	int mid = num / 2;
	int front = 0, rear = 0;
	for (int i = 0; i < mid; ++i)
	{
		if (list[i] != list[mid]) front++;
	}
	for (int i = mid; i < num; ++i)
	{
		if (list[i] != list[mid]) rear++;
	}
	if (front == rear){
		cout << list[mid] << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}

/*
6
2 6 5 6 3 5

4
3 4 6 7

5
3 4 6 6 7
*/