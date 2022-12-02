#include<stdio.h>
#define TAX_300 0.15
#define TAX_450 0.2
#define TAX_ELSE 0.25


int main() {
	double salary,tax,worktime;
	scanf("%lf",&worktime);
	salary = worktime > 40 ? (worktime - 40) * 15 + 40 * 10 : worktime * 10;
	tax = (salary < 300 ? salary : 300) * TAX_300;
	if (salary > 300) {
		tax += (salary - 300 < 150 ? salary - 300 : 150) * TAX_450;
	}
	if (salary > 450) tax += (salary - 450) * TAX_ELSE;
	printf("%.2lf %.2lf %.2lf\n",salary,tax,salary - tax);
}
