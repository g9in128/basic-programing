#include<stdio.h>
#include<malloc.h>

// C
// CB
// CBA

// �ϳ��� ������ �Է����� �޾Ƽ� �� ������ �� ����ŭ 
// ���� ���� ������ ���ĺ��� ����ϴ� 
// ���α׷��� �ۼ��϶�. 

int main() {
	int size;
	scanf("%d", &size);
	char* ch = (char*)malloc(size + 1);
	for (int i = 0; i < size; i++) {
		ch[i] = 'A' + size - i - 1;
		ch[i + 1] = '\0';
		printf("%s\n", ch);
	}
	free(ch);
}
