#include<stdio.h>
//������ ����� �ٰ����� �ִ�. �ٰ����� ���� ���� a, b, c, d�� �׸��� ���� �־��� ��,
// �ٰ����� ������ �ѷ��� ���ϴ� ���α׷��� �ۼ��϶�.

int main() {
	long long a, b, c, d;
	scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
	printf("Area = %lld, Perimeter = %lld", a * b - c * d, 2 * (a + b));
}
