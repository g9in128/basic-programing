#include<stdio.h>
#define GAL_TO_LITER  3.785
#define MILE_TO_KM  1.609

int main() {

	double dis, fuel;
	scanf("%lf%lf", &dis, &fuel);
	double km = dis * MILE_TO_KM / 100 , liter = fuel * GAL_TO_LITER;
	double mpg = dis / fuel, lp100km = liter/km;
	printf("%.1lf mpg or %.1lf liters / 100Km.", mpg, lp100km);
}