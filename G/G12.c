#include<stdio.h>

//하나의 카이사르  암호문을 읽고, 원래의 문장(평문)을 출력하는 프로그램을 작성하라.

int main() {
	char en[80];
	int num;
	scanf("%d", &num);	//옮긴 개수
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
