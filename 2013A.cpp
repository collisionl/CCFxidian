#include <iostream>
using namespace std;
int fei(int n){
	if (n == 0) return 7;
	if (n == 1) return 11;
	return fei(n - 1) + fei(n - 2);
}
bool judge(int n){
	if (n % 3 == 0) return true;
	return false;
}
int main()
{
	int list[100];
	bool torf[100];
	memset(list, 0, 100);
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> list[i];
		list[i] = fei(list[i]);
		torf[i] = judge(list[i]);
		if (torf[i]) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}

/*
3
0 1 2
*/