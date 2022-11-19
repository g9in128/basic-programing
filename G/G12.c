#include<stdio.h>

int main() {
	char en[80];
	int num;
	scanf("%d", &num);
	getchar();
	getchar();
	scanf("%[^\n]s", en);
	int i = 0;
	for (char ch = en[0]; ch != '\0'; ch = en[++i]) {
		if (ch > 'Z' || ch < 'A') continue;
		ch -= num;
		if (ch < 'A') {
			ch += 26;
		}
		else if (ch > 'Z') {
			ch -= 26;
		}
		en[i] = ch;
	}
	printf("%s\n", en);
}