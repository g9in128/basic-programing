#include<stdio.h>

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
