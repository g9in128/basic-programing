#include<stdio.h>

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