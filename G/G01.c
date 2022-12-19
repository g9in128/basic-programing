#include<stdio.h>
#include<ctype.h>
#define END '#'

// '#'을 만날때까지 입력을 읽고
// 읽은 스페이스(' '), 개행문자('\n'), 다른 문자의
// 수를 각각 출력하는 프로그램을 작성하라. 

int main() {
	int space, enter, other;
	space = enter = other = 0;
	char ch = getchar();
	while (ch != END) {
		if (ch == ' ') space++;
		else if (ch == '\n') enter++;
		else other++;
		ch = getchar();
	}
	printf("%d %d %d", space, enter, other);
}
