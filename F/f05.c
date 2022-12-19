#include<stdio.h>
#include<string.h>

// 하나의 문자열(단어)를 입력으로 받아서
// 그것을 거꾸로 출력하는 프로그램을 작성하라.

int main() {
	char ch[100];
	scanf("%s", ch);
	int len = strlen(ch);
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", ch[i]);
	}
}
