#include <iostream>
using namespace std;
int main()
{
	int red, yellow, green = 0;
	int road = 0;
	cin >> red >> yellow >> green >> road;
	int sum = 0;
	while(road--) {
		int light, time = 0;
		cin >> light >> time;
		if (light == 0 || light == 1){
			sum += time;
		}
		if (light == 2){
			sum += (time + red);
		}
	}
	cout << sum << endl;
	return 0;
}

/*
30 3 30
8
0 10
1 5
0 11
2 2
0 6
0 3
3 10
0 3
*/