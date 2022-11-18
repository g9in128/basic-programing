#include<stdio.h>
#include<malloc.h>

int main() {
	char stop;
	scanf("%c", &stop);
	int size = (int)(stop - 'A') + 1;
	char* ch = (char*)malloc(size * 2);
	for (int i = 0; i < size; i++) {
		ch[i] = '-';
	}
	for (int i = 0; i < size; i++) {
		char pr = 'A' + i;
		ch[size - i - 1] = pr;
		ch[size + i - 1] = pr;
		ch[size + i] = '\0';
		printf("%s\n", ch);
	}
}