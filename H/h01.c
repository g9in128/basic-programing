#include<stdio.h>

// 입력을 읽고
// 읽은 스페이스(' '), 개행문자('\n'), 다른 문자의
// 수를 각각 출력하는 프로그램을 작성하라. 

int main() {
	char ch;
	int other = 0, space = 0, enter = 0;
	while ((ch = getchar()) != EOF) {
		if (ch == ' ') space++;
		else if (ch == '\n') enter++;
		else other++;
	}
	printf("%d %d %d", space, enter,other);
}
