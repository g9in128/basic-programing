#include<stdio.h>

// 두 개의 실수 a, b를 입력으로 받아서, 
// a-b를 a*b로 나누는 프로그램을 작성하라. 
// 두 수를 계속 입력 받아서 계산을 하고, 
// 수치형이 아닌 데이터가 들어오면 계산을 종료한다. 

int main() {
	double a, b;
	while (scanf("%lf%lf", &a, &b) == 2) {
		printf("%.3lf\n", (a - b) / (a * b));
	}

}
