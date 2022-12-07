#include<stdio.h>
// ‘ㄴ’ 모양의 다각형이 있다. 그림과 같이, 세 꼭지점의 좌표가 주어질 때, 다각형의 면적과 둘레를 구하는 프로그램을 작성하라. 
int main() {
	long long cord[2][3];
	scanf("%lld%lld%lld%lld%lld%lld", cord[0], cord[1], cord[0] + 1, cord[1] + 1, cord[0] + 2, cord[1] + 2);
	long long a, b, c, d;
	a = cord[0][1] - cord[0][0];
	b = cord[1][0] - cord[1][1];
	c = cord[1][0] - cord[1][2];
	d = cord[0][1] - cord[0][2];
	printf("Area = %lld, Perimeter = %lld", a * b - c * d, 2 * (a + b));
}
