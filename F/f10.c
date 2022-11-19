#include<stdio.h>

int main() {
	double money, interest, year;
	scanf("%lf%lf%lf", &money, &interest, &year);

	for (int i = 0; i < year; i++) {
		money += money * interest;
	}
	printf("%.5lf", money);
}