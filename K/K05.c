#include<stdio.h>
#include<stdlib.h>

// 중복 제거 

int compare(const void* a, const void* b) {
	int* ina = (int*)a,* inb = (int*)b;
	return *ina > *inb ? 1 : (*ina == *inb ? 0 : -1);
}

int main() {
	int n;
	scanf("%d",&n);
	int* arr = (int*) malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d",arr + i);
	}
	qsort(arr,n,sizeof(int),compare);
	int cnt = 1;
	for(int i = 0; i < n - 1;i++) {
		if (arr[i] != arr[i+1]) {
			cnt++;
		}
	}
	printf("%d",cnt);
}
