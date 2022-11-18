#include<stdio.h>
#define MALE 0.73
#define FEMALE 0.6
#define max(a,b) a > b ? a : b;

int main() {
	double a, r, w, h,bac;
	int s;
	scanf("%d %lf %lf%lf", &s, &a, &w, &h);
	r = s == 0 ? MALE : FEMALE;
	bac = max(a * 5.14 / (r * w) - 0.015 * h,0);
	printf("%.5lf", bac);
}