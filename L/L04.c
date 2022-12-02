#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
	int* ina = (int*)a,* inb = (int*)b;
	return *ina > *inb ? -1 : (*ina == *inb ? 0 : 1);
}

int main() {
	int arr[3];
	scanf("%d %d %d",arr,arr+1,arr+2);
	qsort(arr,3,sizeof(int),compare);
	printf(arr[0] * arr[0]== arr[1] * arr[1] + arr[2] * arr[2] ? "YES":"NO");
}
