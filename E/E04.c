#include<stdio.h>

// 화씨 온도를 나타내는 실수 f를 입력으로 받는다.
// 이 온도를 섭씨 온도와 절대 온도로 
// 변환하여 출력하는 프로그램을 작성하라.

int main() {
	double f,c,k;
	scanf("%lf",&f);
	c = 5.0 / 9.0 * (f - 32);
	k = c + 273.16;
	printf("Fahrenheit: %.2lf = Celsius: %.2lf = Kelvin: %.2lf",f,c,k);
}
