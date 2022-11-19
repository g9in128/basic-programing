#include<stdio.h>
#include<math.h>

int main() {
	double a, b, c, d, x;
	while (scanf("%lf%lf%lf", &a, &b, &c) == 3) {
		d = b * b - 4.0 * a * c;
		if (round(d) == 0) {
			printf("%.3lf\n", - b / (2 * a));
		}
		else if (d > 0) {
			printf("%.3lf %.3lf\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
		}
		else {
			puts("Imaginary root\n");
		}
	}
}