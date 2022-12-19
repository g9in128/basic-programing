#include<stdio.h>

// 두 수의 조화평균을 구하는 함수를 작성해서
// 테스트하라.
// 조화평균 : (1/x + 1/y) /2 의 역
 
double havg(double x, double y);

int main() {
	double x, y;
	while (scanf("%lf%lf", &x, &y) == 2) {
		printf("%.3lf\n", havg(x, y));
	}
}

double havg(double x, double y) {
	double res = (1 / x + 1 / y) / 2;
	res = 1 / res;
	return res;
}
