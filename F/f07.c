#include<stdio.h>

int main() {
	int a, b,sum;
	scanf("%d%d", &a, &b);
	while (a < b) {
		sum = 0;
		for (int i = a; i <= b; i++) {
			sum += i * i;
		}printf("%d\n", sum);
		scanf("%d%d", &a, &b);
	}
}