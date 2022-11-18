#include<stdio.h>
#include<malloc.h>

int main() {
	int num, * arr;
	scanf("%d", &num);
	arr = (int*)malloc(sizeof(int) * (num - 1));
	for (int i = 0; i < num - 1; i++) {
		arr[i] = 1;
	}
	for (int i = 2; i <= num; i++) {
		if (!arr[i - 2]) continue;
		for (int j = 2 * i; j <= num; j += i) {
			arr[j - 2] = 0;
		}
	}
	printf("The prime numbers from 1 to %d:\n",num);
	int cnt = 0;
	for (int i = 0; i <= num - 2; i++) {
		if (arr[i]) printf("%d ", i + 2);
		cnt += arr[i];
	}
	printf("\nThe number of prime numbers from 1 to %d is %d.",num,cnt);
	free(arr);
}