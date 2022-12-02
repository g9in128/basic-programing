#include<stdio.h>

double H(double x[],int n) {
	double rsum = 0;
	for (int i = 0; i < n;i++) {
		rsum += 1.0 / x[i];
	}
	return n / rsum;
}

int main() {
	int n = 1;
	while(1) {
		scanf("%d",&n);
		if (n <= 0) break;
		double arr[n];
		for(int i = 0; i < n;i++) {
			scanf("%lf",arr + i);
		}
		printf("%.3lf\n",H(arr,n));
	}
}
