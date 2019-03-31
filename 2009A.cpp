#include <iostream>
using namespace std;
bool test(int n){
	if (n == 1) return false;
	int sum = 0;
	for (int i = 2; i < n ; ++i)
	{
		if(n % i == 0){
			sum = sum + i;
		}
	}
	if (n == sum + 1) return true;
	return false;
}
int main()
{
	int start ,end = 0;
	cin >> start >> end;
	for (int i = start; i <= end; ++i)
	{
		if(test(i)) cout << i << endl;
	}
	return 0;
}

/*
1 100
*/