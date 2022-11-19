#include<stdio.h>

int main() {
	double limit,num = 1;
	scanf("%lf", &limit);
	double sum = 0;
	for (double i = 1; limit + 1 - i > 0.01; i++) {
		sum += num / i;
	}
	printf("%lf ", sum);
	sum = 0;
	for (double i = 1; limit + 1 - i > 0.01; i++, num *= -1) {
		sum += num / i;
	}
	printf("%lf ", sum);
}