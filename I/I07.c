#include<stdio.h>
#include<stdlib.h>

int sqSum(int num) {
	int sum = 0;
	while (num > 0) {
		int mod = num % 10;
		sum += mod * mod;
		num /= 10;
	}
	return sum;
}

int isHappy(int* arr, int num) {
	if (arr == NULL) {
		int* arr2 = (int*) malloc(sizeof(int));
		arr2[0] = 0;
		return isHappy(arr2, num);
	}
	if (num == 1) {
		free(arr);
		return 1;
	}
	int i = 0;
	while (arr[i] != 0) {
		if (arr[i++] == num) {
			free(arr);
			return 0;
		}
	}
	arr[i++] = num;
	arr = (int*) realloc(arr, sizeof(int) * (i + 1));
	arr[i] = 0;
	return isHappy(arr, sqSum(num));
}

int main() {
	int num;
	scanf("%d", &num);
	printf(isHappy(NULL,num) ? "HAPPY" : "UNHAPPY");
}