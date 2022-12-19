#include<stdio.h>
#include<stdlib.h>

// 입력 데이터에서 연속된 문자열 ”c?t”, 
// 즉 ’c’로 시작하고 ’t’로 끝나는 길이가 3인
// 문자열의 횟수를 구하는 프로그램을 작성하라. 
// ”c?t”에서 ’?’의 문자위치에는 어떠한
// 문자라도 올 수가 있다.

int main() {
	int cnt = 0, c1 = 0,c2 = 0;
	char ch;
	while ((ch = getchar()) != EOF) {
		switch (ch) {
		case 'c':
			if (c1 == 1) {
				c1++;
				c2 = 1;
			}
			else c1 = 1;
			break;
		case 't':
			if (c1 == 2) {
				cnt++;
			}
			else if (c2 == 2) {
				cnt++;
			}
		default:
			if (c1 == 1) c1++;
			else c1 = 0;
			if (c2 == 1) {
				c2++;
				c1 = 0;
			}
			else c2 = 0;
		}
	}
	printf("%d", cnt);
}
