#include<stdio.h>

//�� ���� ���� a, b�� �Է����� �޾Ƽ�, a���� b������ ����, 
// ������ ǥ�� ����� ���α׷��� �ۼ��϶�. 

int main() {
	int from, to;
	scanf("%d%d",&from,&to);
	for (int i = from; i < to + 1; i++) {
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
}
