#include<stdio.h>

#define ALONE 17850
#define BREAD 23900
#define DUO_SUM 29750
#define DUO_SEP 14875

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
