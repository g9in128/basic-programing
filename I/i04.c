#include<stdio.h>

// �Է��� �޾� ���ĺ��� ������ ����ϴ�
// ���α׷��� �ۼ��϶�. 

int  getAlphaNum(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		return ch - 'a' + 1;
	}
	else if (ch >= 'A' && ch <= 'Z') {
		return ch - 'A' + 1;
	}
	else if (ch == ' ' || ch == '\n') {
		return 0;
	}
	else {
		return -1;
	}
}


int main() {
	char ch;
	while ((ch = getchar()) != EOF) {
		int num = getAlphaNum(ch);
		if (num > 0) {
			printf("%c is a letter #%d.\n",ch, num);
		}
		else if (num < 0) {
			printf("%c is not a letter.\n", ch);
		}
	}
}
