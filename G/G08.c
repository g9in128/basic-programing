#include<stdio.h>

#define ALONE 17850
#define BREAD 23900
#define DUO_SUM 29750
#define DUO_SEP 14875

// �� ����� ���� ���а� �ҵ��� �Է����� �޾Ƽ� �ҵ漼�� ����ϴ� ���α׷��� �ۼ��϶�. 
// ���� : 17850���� 15% ������ 28% 
// ���� : 23900���� 15% ������ 28% 
// �¹��� �ջ� : 29750 ���� 15% ������ 28% 
// �¹��� ���� : 14875 ���� 15% ������ 28%  

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
