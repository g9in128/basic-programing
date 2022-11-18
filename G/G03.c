#include<stdio.h>
#define END '#'

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