#include<stdio.h>
#include<limits.h>

int max(int* arr,int size) {
	int max = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int main() {
	int arr[100000] = { INT_MIN };
	int i = 0;
	while (scanf("%d", arr + i) != EOF) {
		i++;
	}
	printf("%d", max(arr,100000));
}