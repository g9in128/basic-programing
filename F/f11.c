#include<stdio.h>

// �� ���������� �ζ� ��÷�ݰ� ���� ���� ����, 
// �ų� ������ ���� ���� �ݾ��� �Է����� �־��� ��, 
// ���� �ܰ� �������µ� �ɸ��� �޼��� ����ϴ� ���α׷��� �ۼ��϶�. 
// ���� ������ ���� �ܰ� �������� �ʴ´ٸ� NO�� ����϶�. 

int main() {
	double money, interest, minus;
	scanf("%lf%lf%lf",&money,&interest,&minus);
	int cnt = 0;
	if (money * interest * 0.01 - minus < 0) {
		while (money >= 0) {
			money += money * interest * 0.01;
			money -= minus;
			cnt++;
		}
		printf("%d", cnt);
	}
	else {
		printf("NO");
	}
}
