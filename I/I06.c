#include<stdio.h>

unsigned long long fibonacci(int n) {
	unsigned long long a = 1, b = 0, c = 0;
	for (int i = 0; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	while (n >= 0) {
		printf("#%d: %llu\n", n,fibonacci(n));
		scanf("%d", &n);
	}
}