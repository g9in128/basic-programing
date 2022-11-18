#include<stdio.h>
#include<stdlib.h>

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