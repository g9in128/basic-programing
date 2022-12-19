#include<stdio.h>

// a = 1 + 1/2 + 1/3 + ...
// b = 1 - 1/2 + 1/3 - ...

// 위의 두 무한수열 a,b의 값을 구할 항의 수 n을 입력으로 받아서 
// 두 무한수열의 값을 구하는 출력하는 프로그램을 작성하라.

int main() {
	double limit,num = 1;
	scanf("%lf", &limit);
	double sum = 0;
	for (double i = 1; limit + 1 - i > 0.01; i++) {
		sum += num / i;
	}
	printf("%lf ", sum);
	sum = 0;
	for (double i = 1; limit + 1 - i > 0.01; i++, num *= -1) {
		sum += num / i;
	}
	printf("%lf ", sum);
}
