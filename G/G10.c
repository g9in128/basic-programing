#include<stdio.h>
#include<math.h>
 
// 2차 방정식의 근을 구하는 프로그램을 작성하라. 
// 즉, 2차 방정식 ax^2 + bx + c = 0 를
// 만족하는 x를 구하라. 
// 허근일 경우에는 ‘Imaginary root’를 출력하라.

int main() {
	double a, b, c, d, x;
	while (scanf("%lf%lf%lf", &a, &b, &c) == 3) {
		d = b * b - 4.0 * a * c;
		if (round(d) == 0) {
			printf("%.3lf\n", - b / (2 * a));
		}
		else if (d > 0) {
			printf("%.3lf %.3lf\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
		}
		else {
			puts("Imaginary root\n");
		}
	}
}
