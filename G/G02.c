#include<stdio.h>

int main() {
	int inn, odd, even, sumodd, sumeven;
	double avgodd, avgeven;
	odd = even = sumodd = sumeven = 0;
	scanf("%d", &inn);
	while (inn != 0) {
		if (inn % 2 == 0) {
			even++;
			sumeven += inn;
		}
		else {
			odd++;
			sumodd += inn;
		}
		scanf("%d", &inn);
	}
	avgodd = odd == 0 ? 0 : (double)sumodd / odd;
	avgeven = even == 0 ? 0 : (double)sumeven / even;
	printf("%d %.2lf %d %.2lf", even, avgeven, odd,avgodd);
}