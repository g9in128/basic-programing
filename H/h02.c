#include<stdio.h>

// 입력을 읽고 대문자와 소문자의 수를 
// 출력하는 프로그램을 작성하라. 

int main() {
	char ch;
	int big = 0, small = 0;
	while ((ch = getchar()) != EOF) {
		if (ch >= 'A' && ch <= 'Z') big++;
		else if (ch >= 'a' && ch <= 'z')small++;
	}
	printf("%d %d", big, small);
}
