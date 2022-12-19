#include<stdio.h>
#include<malloc.h>

// n개의 정수를 입력으로 받아서, 
// 입력 받은 데이터를 
// 역순으로 출력하는 프로그램을 작성하라.

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
