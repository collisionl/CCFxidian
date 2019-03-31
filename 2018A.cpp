/*
#include <bits/stdc++.h>万能头
包含：
#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
等
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int sum = 0;
	int a = 0;
	int last = 0;
	while(cin >> a){
		if (a == 0) break;
		if (a == 1){
			sum++;
			last = 0;
		}
		if (a == 2){
			sum = sum + 2 * (last + 1);
			last++;
		}
	}
	cout << sum << endl;
	return 0;
}

//1 1 2 2 2 1 1 2 2 0