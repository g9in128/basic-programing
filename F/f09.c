#include<stdio.h>

// a = 1 + 1/2 + 1/3 + ...
// b = 1 - 1/2 + 1/3 - ...

// ���� �� ���Ѽ��� a,b�� ���� ���� ���� �� n�� �Է����� �޾Ƽ� 
// �� ���Ѽ����� ���� ���ϴ� ����ϴ� ���α׷��� �ۼ��϶�.

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
