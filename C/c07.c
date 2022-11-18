#include<stdio.h>

int main() {
	double r[5] = { 0 };
	scanf("%lf%lf%lf%lf%lf", r, r + 1, r + 2, r + 3, r + 4);
	double a = (r[0] + r[1]) * r[2] / (r[0] + r[1] + r[2]);
	double b = a + r[4];
	double c = b * r[0] / (b + r[0]);
	printf("%.0lf", c + r[2] + r[3]);
}