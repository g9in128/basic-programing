#include<stdio.h>

// 절대 온도를 나타내는 실수 K를 입력으로 받는다. 
// 이 온도를 섭씨 온도와 화씨 온도로 변환하여 
// 출력하는 프로그램을 작성하라. 

int main() {
	double k,c,f;
	scanf("%lf", &k);
	c = k - 273.16;
	f = 9.0 / 5.0 * c + 32;
	printf("%.2lf %.2lf",f,c);
}
