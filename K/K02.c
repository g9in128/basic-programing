#include<stdio.h>
#include<stdlib.h>

// ÃÖºó¼ö 

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
