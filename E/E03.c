#include<stdio.h>

// ���� ������ ��Ÿ���� ���� n�� �Է����� �޴´�. 
// ù° ���� 1000���� �޷�� �ް�, 
// ��° ������ ������ �� ������ ���� 
// �� ������ �޷ῡ 1,000���� ���ؼ� �޷Ḧ �޴´ٰ� �� ��, 
// �ް� �Ǵ� �� �޷Ḧ ���ϴ� ���α׷��� �ۼ��϶�.

int main() {
	int days;
	long long check = 0;
	scanf("%d", &days);
	int day = 1;
	while (day <= days) {
		check += day * 1000;
		day++;
	}
	printf("%lld",check);
}
