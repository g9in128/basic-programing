#include<stdio.h>
#include<math.h>
// 두 물체의 점 질량 m1(kg)과 m2(kg)와 두 물체 사이의 거리 r(km) 을 읽고, 만유인력 F를 구하는 프로그램을 작성하라.
// F = G * m1 * m2 
//	  -------------
//	       r^2

int main() {
	double m1, m2, r;
	const double G = 6.6743e-11;
	scanf("%le%le%le", &m1, &m2, &r);
	printf("%le", G * m1 * m2 / pow(1000 * r, 2));
}
