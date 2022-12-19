#include<stdio.h>
#define END '#'

// #을 만날때까지 입력을 읽고
// "ei"가 나타난 횟수를 출력하는
// 프로그램을 작성하라. 

int main() {
	int e = 0,ei = 0;
	char ch = getchar();
	while (ch != END) {
		switch (ch) {
		case 'e':
			e = 1;
			break;
		case 'i':
			if (e == 1) ei++;
		default:
			e = 0;
		}
		ch = getchar();
	}
	printf("%d", ei);
}
