#include<stdio.h>
#include<stdlib.h>

#define max(a,b) a > b ? a : b

int compare(const void* a, const void* b) {
	int* ina = (int*)a,* inb = (int*)b;
	return *ina > *inb ? 1 : (*ina == *inb ? 0 : -1);
}

int main() {
	int n,a,b;
	scanf("%d",&n);
	int* p = (int*) malloc(sizeof(int) * n);
	int* m = (int*) malloc(sizeof(int) * n);
	for(int i = 0; i < n;i++) {
		scanf("%d %d",&a,&b);
		p[i] = a + b;
		m[i] = a - b;
	}
	qsort(p,n,sizeof(int),compare);
	qsort(m,n,sizeof(int),compare);
	printf("%d",max(p[n-1]-p[0],m[n-1]-m[0]));
}
