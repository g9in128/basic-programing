#include<stdio.h>

int main() {
	double a, b;
	while (scanf("%lf%lf", &a, &b) == 2) {
		printf("%.3lf\n", (a - b) / (a * b));
	}

}