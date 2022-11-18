#include<stdio.h>
#include<math.h>

int main() {
	double m1, m2, r;
	const double G = 6.6743e-11;
	scanf("%le%le%le", &m1, &m2, &r);
	printf("%le", G * m1 * m2 / pow(1000 * r, 2));
}