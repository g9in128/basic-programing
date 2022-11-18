#include<stdio.h>

int main() {
	char stop;
	scanf("%c", &stop);
	int size = (int)(stop - 'A') + 1;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			printf("-");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("%c", 'A' + j);
		}
		for (int j = i; j > 0; j--) {
			printf("%c", 'A' + j - 1);
		}
		printf("\n");
	}
}