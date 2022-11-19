#include<stdio.h>

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