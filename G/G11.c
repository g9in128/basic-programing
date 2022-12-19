#include<stdio.h>

//n과 k를 읽고 
//nCk를 구하는 프로그램을 작성하라.

int main() {
	long long n, k, c = 1;
	scanf("%lld%lld", &n, &k);
	for (int i = 0; i < k; i++) {
		c *= n - i;
	}
	for (int i = 2; i <= k; i++) {
		c /= i;
	}
	printf("%lld", c);
}
