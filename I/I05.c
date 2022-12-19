#include<stdio.h>

// n을 r진수로 출력하는 함수를 
// 작성하고 테스트하라. 

void to_base_n(int n, int r) {
	char str[32];
	int i = 0;
	while (n != 0) {
		str[i++] = '0' + n % r;
		n = n / r;
	}
	str[i--] = '\0';
	for (; i >= 0; i--) {
		printf("%c", str[i]);
	}
}

int main() {
	int n, r;
	scanf("%d%d", &n, &r);
	to_base_n(n, r);
}
