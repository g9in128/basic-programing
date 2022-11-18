#include<stdio.h>

int main() {
	long long cord[2][3];
	scanf("%lld%lld%lld%lld%lld%lld", cord[0], cord[1], cord[0] + 1, cord[1] + 1, cord[0] + 2, cord[1] + 2);
	long long a, b, c, d;
	a = cord[0][1] - cord[0][0];
	b = cord[1][0] - cord[1][1];
	c = cord[1][0] - cord[1][2];
	d = cord[0][1] - cord[0][2];
	printf("Area = %lld, Perimeter = %lld", a * b - c * d, 2 * (a + b));
}