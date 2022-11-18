#include<stdio.h>
#include<malloc.h>

int main() {
	int size;
	scanf("%d", &size);
	char* ch = (char*) malloc(size + 1);
	for (int i = 0; i < size; i++) {
		ch[i] = '$';
		ch[i + 1] = '\0';
		printf("%s\n", ch);
	}
	free(ch);
}