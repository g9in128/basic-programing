#include<stdio.h>
#include<string.h>

// �ϳ��� ���ڿ�(�ܾ�)�� �Է����� �޾Ƽ�
// �װ��� �Ųٷ� ����ϴ� ���α׷��� �ۼ��϶�.

int main() {
	char ch[100];
	scanf("%s", ch);
	int len = strlen(ch);
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", ch[i]);
	}
}
