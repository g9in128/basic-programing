#include<stdio.h>

double havg(double x, double y);

int main() {
	double x, y;
	while (scanf("%lf%lf", &x, &y) == 2) {
		printf("%.3lf\n", havg(x, y));
	}
}

double havg(double x, double y) {
	double res = (1 / x + 1 / y) / 2;
	res = 1 / res;
	return res;
}