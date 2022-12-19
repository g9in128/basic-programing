#include<stdio.h>

// 세 수를 입력받아 
// 정렬하는 함수를 작성하고 테스트하라.

void swap(double* a,double* b) {
	double tmp = *a;
	*a = *b;
	*b = tmp;
}

void aligin(double* a,double* b, double* c) {
	if (*a > *b) swap(a,b);
	if (*b > *c) swap(b,c);
	if (*a > *b) swap(a,b);
}

int main() {
	double a,b,c;
	while(scanf("%lf%lf%lf",&a,&b,&c)== 3) {
		aligin(&a,&b,&c);
		printf("%lf %lf %lf\n",a,b,c);
	}
}
