#include <iostream>
using namespace std;
int main()
{
	int money = 0;
	cin >> money;
	int sum = 0;
	int m_50 = money / 50;
	money -= 50 * m_50;
	int m_30 = money / 30;
	money -= 30 * m_30;
	sum = m_50 * 7 + m_30 * 4 + money / 10;
	cout << sum << endl;
	return 0;
}

/*
80

#include <iostream>
using namespace std;
int main()
{
	int m = 0;
	cin >> m;
	m = (m / 50) * 7 + ((m % 50) / 30) * 4 + ((m % 50) % 30) / 10;
	cout << m << endl;
	return 0;
}

*/