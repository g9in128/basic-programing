#include<stdio.h>

int main() {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("%.1f", a * b * c / (a + b + c));
}