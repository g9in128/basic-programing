#include<stdio.h>

// 0을 입력할때 까지 정수들을 읽어서
// 홀수의 개수와 평균,
// 짝수의 개수와 평균을 각각 출력하는
// 프로그램을 작성하라. 
int main() {
	int inn, odd, even, sumodd, sumeven;
	double avgodd, avgeven;
	odd = even = sumodd = sumeven = 0;
	scanf("%d", &inn);
	while (inn != 0) {
		if (inn % 2 == 0) {
			even++;
			sumeven += inn;
		}
		else {
			odd++;
			sumodd += inn;
		}
		scanf("%d", &inn);
	}
	avgodd = odd == 0 ? 0 : (double)sumodd / odd;
	avgeven = even == 0 ? 0 : (double)sumeven / even;
	printf("%d %.2lf %d %.2lf", even, avgeven, odd,avgodd);
}
