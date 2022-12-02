#include<stdio.h>

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
