#include<stdio.h>

int main() {
	int a, b, c, d, pr = 0, pi = 0;
	double dr, di,m,div;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	pr += a * c + -1 * b * d;
	pi += a * d + b * c;
	
	dr = (double) (a * c + b * d);
	di = (double) (-1 * a * d + b * c);
	div = (double) (c * c + d * d);
	
	printf("%d %d\n", pr, pi);
	if (div == 0) printf("NONE");
	else printf("%.2lf %.2lf", dr / div, di / div);
}