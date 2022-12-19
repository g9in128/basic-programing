#include<stdio.h>

// 입력받은 문자를 i열에서 j열까지 출력하는 chline(ch,i,j)를 만들어서
// 테스트하라. 

void chline(char, int, int);

int main() {
	char ch;
	int start, stop;
	scanf("%c%d%d", &ch, &start, &stop);
	
	chline(ch, start, stop);
}

void chline(char ch, int start, int stop) {
	for (int i = 1; i < start; i++) {
		putc('+', stdout);
	}
	for (int i = start; i <= stop; i++) {
		putc(ch, stdout);
	}
	for (int i = 1; i < start; i++) {
		putc('+', stdout);
	}
}
