#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	return ( *(int*)a - *(int*)b );
}
int main(){
	int num = 0;
	scanf("%d", &num);
	int *list = (int*)malloc(num * sizeof(int));
	for (int i = 0; i < num; i++){
		scanf("%d", &list[i]);
	}
	// qsort(list, num, sizeof(int), cmp);
	// for(int i = 0; i < num; i++){
	// 	printf("%d ", list[i]);
	// }
	int pre = list[0];
	int sum = 1;
	for (int i = 1; i < num; i++){
		if (list[i] != pre){
			sum++;
			pre = list[i];
		}
	}
	printf("%d\n", sum);
	return 0;
}