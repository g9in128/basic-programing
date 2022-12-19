#include<stdio.h>

// 이 문제에서는 로또 당첨금과 은행 예금 이율, 
// 매년 마지막 날에 인출 금액이 입력으로 주어질 때, 
// 은행 잔고가 없어지는데 걸리는 햇수를 계산하는 프로그램을 작성하라. 
// 만일 영원히 은행 잔고가 없어지지 않는다면 NO를 출력하라. 

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
