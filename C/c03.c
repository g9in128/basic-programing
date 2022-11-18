#include<stdio.h>

int main() {
	float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	printf("%.2f", (a * b - c * d) / (a - b * c - d));
}