#include<stdio.h>
#include<stdlib.h>

// 정렬 후 k1,k2,k3번째 수의 합 

int compare(const void* a, const void* b) {
	int* ina = (int*)a,* inb = (int*)b;
	return *ina > *inb ? 1 : (*ina == *inb ? 0 : -1);
}

int main() {
	int n,k1,k2,k3;
	scanf("%d %d %d %d",&n,&k1,&k2,&k3);
	int* arr = (int*) malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d",arr+i);
	}
	qsort(arr,n,sizeof(int),compare);
	printf("%d",arr[k1-1]+arr[k2-1]+arr[k3-1]);
}
