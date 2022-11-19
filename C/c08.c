#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main() {
	double r;
	scanf("%lf", &r);
	double a = M_PI * r * r, p = 2 * M_PI * r;
	printf("Radius = %.1lf, Area = %.1lf, Perimeter = %.1lf", r, a, p);
}