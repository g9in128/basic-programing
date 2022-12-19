#include<stdio.h>
#define TAX_300 0.15
#define TAX_450 0.2
#define TAX_ELSE 0.25

// 노동한 시간을 입력받아
// 총소득, 세금, 순소득을 출력하는
// 프로그램을 작성하라.

// a) 기본급 : 시간당 10$
// b) 초과급(40시간 이상 근무) : 기본급의 1.5배
// c) 소득세율 :  300$ 까지 15%
//				다음 150$ 까지 20%
//				나머지는 25% 

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
