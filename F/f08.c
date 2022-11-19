#include<stdio.h>
#include<malloc.h>

int main() {
	int size;
	scanf("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		scanf("%d", arr + i);
	}
	for (int i = size - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	free(arr);
}