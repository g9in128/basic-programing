#include<stdio.h>
#include<math.h>

int main() {
	double l;
	scanf("%lf", &l);
	double v = sqrt(2) * pow(l, 3) / 12;
	double a = sqrt(3) * pow(l, 2);
	double h = sqrt(6) * l / 3;
	printf("%.2lf %.2lf %.2lf", v, a, h);
}