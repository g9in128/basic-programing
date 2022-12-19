#include<stdio.h>

// 두개의 정수 n과 m을 입력으로 받는다. 
// n보다 m만큼 작은 수부터 n보다 m만큼 큰 수 
// 까지의 합을 구하는 프로그램을 작성하라.
int main() {
	long long n,m,a,sum;
	scanf("%lld%lld",&n,&m);
	a = n - m;
	sum = 0;
	while(a <= n + m) {
		sum += a++;
	}
	printf("%lld",sum);
}
