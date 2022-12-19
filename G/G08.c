#include<stdio.h>

#define ALONE 17850
#define BREAD 23900
#define DUO_SUM 29750
#define DUO_SEP 14875

// 한 사람의 과세 구분과 소득을 입력으로 받아서 소득세를 계산하는 프로그램을 작성하라. 
// 독신 : 17850까지 15% 나머지 28% 
// 가장 : 23900까지 15% 나머지 28% 
// 맞벌이 합산 : 29750 까지 15% 나머지 28% 
// 맞벌이 별산 : 14875 까지 15% 나머지 28%  

int main() {
	char type = getchar();
	double limit;
	switch(type) {
	case '1':
		limit = ALONE;
		break;
	case '2':
		limit = BREAD;
		break;
	case '3':
		limit = DUO_SUM;
		break;
	case '4':
		limit = DUO_SEP;
		break;
	}
	double money,tax;
	scanf("%lf",&money);
	tax = ((money < limit) ? money : limit) * 0.15;
	if (money > limit) tax += (money - limit) * 0.28; 
	printf("%.2lf",tax);
}
