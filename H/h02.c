#include<stdio.h>

int main() {
	char ch;
	int big = 0, small = 0;
	while ((ch = getchar()) != EOF) {
		if (ch >= 'A' && ch <= 'Z') big++;
		else if (ch >= 'a' && ch <= 'z')small++;
	}
	printf("%d %d", big, small);
}