#include<stdio.h>

// N개의 정수가 있다. 이 정수들의 합을 구하는 프로그램을 작성하라.

int main() {
	int size;
	scanf("%d", &size);
	long long sum = 0;
	int num;
	for (int i = 0; i < size; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("%lld", sum);
}
