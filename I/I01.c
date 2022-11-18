#include<stdio.h>

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