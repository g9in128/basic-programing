#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//int* merge(int* a,int sizea,int* b,int sizeb) {
//	int* arr = (int*) malloc(sizeof(int) *(sizea+sizeb));
//	for (int i = 0,j=0;i+j < sizea + sizeb;) {
//		if (a[i] < b[j]) {
//			arr[i+j] = b[j];
//			b[j] = INT_MIN;
//			if (j < sizeb) j++;
//			else i++;
//		}else {
//			arr[i+j] = a[i];
//			a[i] = INT_MIN;
//			if (i < sizea) i++;
//			else j++;
//		}
//	}
//	return arr;
//}
//
//int* mergeSort(int* arr,int size) {
//	if (size == 1) {
//		return arr;
//	}
//	int size2 = size / 2;
//	int size1 = size - size2;
//	int *a = (int*) malloc(sizeof(int) * size1);
//	int *b = (int*) malloc(sizeof(int) * size2);
//	for (int i = 0; i < size1;i++) {
//		a[i] = arr[i];
//	}
//	for (int i = size1; i < size;i++) {
//		b[i-size1] = arr[i];
//	}
//	return merge(mergeSort(a,size1),size1,mergeSort(b,size2),size2);
//}

int compare(const void* a, const void* b) {
	int* ina = (int*)a,* inb = (int*)b;
	return *ina > *inb ? -1 : (*ina == *inb ? 0 : 1);
}

int main() {
	int n;
	scanf("%d",&n);
	int* arr = (int*) malloc(sizeof(int) * n);
	for (int i = 0;i< n;i++) {
		scanf("%d",arr + i);
	}
	qsort(arr,n, sizeof(int), compare);
	int max ,idx ,cnt ,i;
	max = idx = cnt = i = 0;
	for (; i < n;i++) {
		cnt++;
		if (i == n - 1 || arr[i] != arr[i + 1]) {
			if (cnt > idx) {
				max = arr[i-1];
				idx = cnt;
 			}
			cnt = 0;
		}
	}
	free(arr);
	printf("%d %d",max,idx);
}
