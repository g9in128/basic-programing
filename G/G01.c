#include<stdio.h>
#include<ctype.h>
#define END '#'

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