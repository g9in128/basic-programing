#include<stdio.h>
#include<string.h>
// ���� �̸�, �׸��� ���̸� �Է� �޾Ƽ�
// ���� �̸��� ���� ���� ���̸� ����ϴ� ���α׷��� �ۼ��϶�.

int main() {
	char name[31],fname[31];
	int age;
	scanf("%s%s%d", fname,name,&age);
	printf("%d %d", strlen(name) + strlen(fname), age);
	
}
