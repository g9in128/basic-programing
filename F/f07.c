#include<stdio.h>

// �� ���� ���� a, b�� �Է����� �޾Ƽ�, 
// a���� b������ ������ ���� ���ϴ� ���α׷��� �ۼ��϶�.

int main() {
	int a, b,sum;
	scanf("%d%d", &a, &b);
	while (a < b) {
		sum = 0;
		for (int i = a; i <= b; i++) {
			sum += i * i;
		}printf("%d\n", sum);
		scanf("%d%d", &a, &b);
	}
}
