#include<stdio.h>

// �Է��� �а� �빮�ڿ� �ҹ����� ���� 
// ����ϴ� ���α׷��� �ۼ��϶�. 

int main() {
	char ch;
	int big = 0, small = 0;
	while ((ch = getchar()) != EOF) {
		if (ch >= 'A' && ch <= 'Z') big++;
		else if (ch >= 'a' && ch <= 'z')small++;
	}
	printf("%d %d", big, small);
}
