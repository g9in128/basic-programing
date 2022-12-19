#include<stdio.h>

// 일한 날수를 나타내는 정수 n을 입력으로 받는다. 
// 첫째 날에 1000원을 급료로 받고, 
// 둘째 날부터 마지막 날 까지는 매일 
// 그 전날의 급료에 1,000원씩 더해서 급료를 받는다고 할 때, 
// 받게 되는 총 급료를 구하는 프로그램을 작성하라.

int main() {
	int days;
	long long check = 0;
	scanf("%d", &days);
	int day = 1;
	while (day <= days) {
		check += day * 1000;
		day++;
	}
	printf("%lld",check);
}
