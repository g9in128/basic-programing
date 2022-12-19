#include<stdio.h>

// 두 개의 정수 a, b를 입력으로 받아서, 
// a부터 b까지의 제곱의 합을 구하는 프로그램을 작성하라.

int main() {
	int a, b,sum;
	scanf("%d%d", &a, &b);
	while (a < b) {
		sum = 0;
		for (int i = a; i <= b; i++) {
			sum += i * i;
		}printf("%d\n", sum);
		scanf("%d%d", &a, &b);
	}
}
