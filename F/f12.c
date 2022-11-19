#include<stdio.h>

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