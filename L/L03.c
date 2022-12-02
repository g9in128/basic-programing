#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d",&n);
	int** arr = (int**) malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*) malloc(sizeof(int) * n);
		for (int j = 0; j < n;j++) {
			scanf("%d",arr[i] + j);
		}
	}
	long long a,b;
	a=b=1;
	for (int i=0,j=0,k=n-1;i < n;i++,j++,k--) {
		a *= arr[i][j];
		b *= arr[i][k];
	}
	printf("%lld",a-b);
}
