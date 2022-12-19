#include<stdio.h>

// ---A
// --ABA
// -ABCBA
// ABCDCBA

// 하나의 문자를 입력으로 받아서 그 문자가 맨 아래 가운데 오게하는 
// 피라미드 모양을 위와 같이 출력하는 프로그램을 작성하라.

int main() {
	char stop;
	scanf("%c", &stop);
	int size = (int)(stop - 'A') + 1;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			printf("-");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("%c", 'A' + j);
		}
		for (int j = i; j > 0; j--) {
			printf("%c", 'A' + j - 1);
		}
		printf("\n");
	}
}
