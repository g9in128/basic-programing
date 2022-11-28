#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int* merge(int* a,int sizea,int* b,int sizeb) {
	int* arr = (int*) malloc(sizeof(int) *(sizea+sizeb));
	for (int i = 0,j=0;i+j < sizea + sizeb;) {
		if (a[i] > b[j]) {
			arr[i+j] = b[j];
			if (j < sizeb) j++;
			else i++;
		}else {
			arr[i+j] = a[i];
			if (i < sizea) i++;
			else j++;
		}
	}
	free(a);
	free(b);
	return arr;
}

int* mergeSort(int* arr,int size) {
	if (size == 1) {
		return arr;
	}
	int size2 = size / 2;
	int size1 = size - size2;
	int *a = (int*) malloc(sizeof(int) * size1);
	int *b = (int*) malloc(sizeof(int) * size2);
	for (int i = 0; i < size1;i++) {
		a[i] = arr[i];
	}
	for (int i = size1; i < size;i++) {
		b[i-size1] = arr[i];
	}
	free(arr);
	return merge(mergeSort(a,size1),size1,mergeSort(a,size2),size2);
}

int main() {
	int n;
	scanf("%d",&n);
	int* arr = (int*) malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d",arr + i);
	}
	arr = mergeSort(arr,n);
	for (int i = 0; i < n;i++) {
		printf("%d",arr[i]);
	}
}
