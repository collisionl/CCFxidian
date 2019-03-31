/*
string用法
int数字转char数字：char = int + '0';
*/
#include <iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;
	// cout << str << endl;
	string output;
	int i = 0;
	int count = 0;
	while(str[i]){
		if (str[i] != str[i + 1] && count >= 1){
			count++;
			char temp = count + '0';
			output += temp;
			output += str[i];
			count = 0;
		}
		else if (str[i] != str[i + 1] && count < 1){
			output += str[i];
		}
		else{
			count++;
		}
		i++;
	}
	cout << output << endl;
	return 0;
}

/*
ABBCCC
*/