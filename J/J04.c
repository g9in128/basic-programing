#include<stdio.h>
#include<malloc.h>

typedef unsigned long long USlong;

int main() {
	USlong n,k;
	scanf("%lld %lld",&n,&k);
	USlong* pascal = (USlong*)malloc(sizeof(USlong) * n),
		*tmp = (USlong*)malloc(sizeof(USlong) * n);
	for (int i = 1; i < n;i++) {
		tmp[i] = 0;
	}
	tmp[0] = 1;
	for (int i = 0; i < n-1;i++) {
		for (int j = 0; j < n;j++) {
			pascal[j] = tmp[j] + (j <= 0 ? 0 : tmp[j-1]); 
		}
		USlong* cpy = tmp;
		tmp = pascal;
		pascal = cpy;
	}
	printf("%lld\n",tmp[k-1]);
}
