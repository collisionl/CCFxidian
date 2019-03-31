if __name__ == '__main__':
	a = int(input())
	flag = [0 for i in range(a)]
	for i in range(a):
		temp = input().replace("x", "*").replace("/", "//")
		if eval(temp) == 24:
			flag[i] = 1;
	for i in range(a):
		if flag[i] == 1:
			print("Yes")
		else:
			print("No")

'''
10
9+3+4x3
5+4x5x5
7-9-9+8
5x6/5x4
3+5+7+9
1x1+9-9
1x9-5/9
8/5+6x9
6x7-3x6
6x4+4/5
'''