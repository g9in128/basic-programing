#include<stdio.h>
// ��� ������ 1�⵿���� ������� �б� ���� �־��� �ִ�.
// ������ �б��� ������� ��ü�� �� %������ ����ϴ� ���α׷��� �ۼ��϶�.

int main() {
	double sales[4];
	scanf("%lf%lf%lf%lf", sales, sales + 1, sales + 2, sales + 3);
	double rat = sales[3] * 100 / (sales[0] + sales[1] + sales[2] + sales[3]);
	printf("%.2lf%%",rat);
}
