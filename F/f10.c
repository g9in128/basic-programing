#include<stdio.h>

// �� ���������� ���� ��길 �ٷ��. 
// ���ݰ� �������ڰ� �־��� ��, N�� �Ŀ��� �ݾ��� 
// �󸶰� �Ǵ����� ����ϴ� ���α׷��� �ۼ��϶�.

int main() {
	double money, interest, year;
	scanf("%lf%lf%lf", &money, &interest, &year);

	for (int i = 0; i < year; i++) {
		money += money * interest;
	}
	printf("%.5lf", money);
}
