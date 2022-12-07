#include<stdio.h>
//‘ㄴ’ 모양의 다각형이 있다. 다각형의 변의 길이 a, b, c, d가 그림과 같이 주어질 때,
// 다각형의 면적과 둘레를 구하는 프로그램을 작성하라.

int main() {
	long long a, b, c, d;
	scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
	printf("Area = %lld, Perimeter = %lld", a * b - c * d, 2 * (a + b));
}
