#include<stdio.h>

int main() {
	float mbps, mb;
	scanf("%f%f", &mbps, &mb);
	printf("%.2fsec", mb / (mbps / 8));
}