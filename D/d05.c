#include<stdio.h>
// 어느 가게의 1년동안의 매출액이 분기 별로 주어져 있다.
// 마지막 분기의 매출액이 전체의 몇 %인지를 계산하는 프로그램을 작성하라.

int main() {
	double sales[4];
	scanf("%lf%lf%lf%lf", sales, sales + 1, sales + 2, sales + 3);
	double rat = sales[3] * 100 / (sales[0] + sales[1] + sales[2] + sales[3]);
	printf("%.2lf%%",rat);
}
