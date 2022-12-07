#include<stdio.h>
#define GAL_TO_LITER  3.785
#define MILE_TO_KM  1.609
// 주행거리와 소모한 연료양(갤런)을 입력받아 
// 갤런당 마일(mpg)과 100km당 리터를 출력하는 프로그램을 작성하라. 

int main() {

	double dis, fuel;
	scanf("%lf%lf", &dis, &fuel);
	double km = dis * MILE_TO_KM / 100 , liter = fuel * GAL_TO_LITER;
	double mpg = dis / fuel, lp100km = liter/km;
	printf("%.1lf mpg or %.1lf liters / 100Km.", mpg, lp100km);
}
