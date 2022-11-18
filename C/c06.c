#include<stdio.h>

int main() {
	double m, hob, doe, mal,l;
	scanf("%lf", &m);
	hob = m / 1.8039e-4;
	doe = hob / 10;
	mal = doe / 10;
	l = 1000 * m;
	printf("%.2lf cubic meters are equivalent to each of the following:\n%.2lf hob\n%.2lf doe\n%.2lf mal\n%.2lf liters", m, hob, doe, mal, l);
}