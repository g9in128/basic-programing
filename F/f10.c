#include<stdio.h>

// 이 문제에서는 복리 계산만 다룬다. 
// 원금과 복리이자가 주어질 때, N년 후에는 금액이 
// 얼마가 되는지를 계산하는 프로그램을 작성하라.

int main() {
	double money, interest, year;
	scanf("%lf%lf%lf", &money, &interest, &year);

	for (int i = 0; i < year; i++) {
		money += money * interest;
	}
	printf("%.5lf", money);
}
