#include<stdio.h>
#include<stdlib.h>

// Àý»çÆò±Õ º¸Á¤Æò±Õ

int compare(const void* a, const void* b) {
	int* ina = (int*)a,* inb = (int*)b;
	return *ina > *inb ? -1 : (*ina == *inb ? 0 : 1);
}

int main() {
	int n,k;
	double sum = 0,avga,avgb;
	scanf("%d %d",&n,&k);
	int* arr = (int*) malloc(sizeof(int) * n);
	for (int i = 0; i < n;i++) {
		scanf("%d",arr + i);
	}
	qsort(arr,n,sizeof(int),compare);
	for (int i = k; i < n-k;i++) {
		sum += arr[i];
	}
	avga = sum / (n - 2.0 * k);
	for (int i = 0; i < k;i++) {
		sum+= arr[k];
		sum+= arr[n-k-1];
	}
	avgb = sum / n;
	printf("%.1lf %.1lf",avga,avgb);
}
