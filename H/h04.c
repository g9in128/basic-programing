#include<stdio.h>

// 입력이 유효한 괄호 문자인지 판별하는
// 프로그램을 작성하라. 

int main() {
	char ch;
	int cnt=0;
	while ((ch = getchar()) != '\n') {
		if (ch == '(') cnt++;
		else if (ch == ')') cnt--;
		if (cnt < 0) break;
	}
	printf(cnt == 0 ? "YES" : "NO");
}
