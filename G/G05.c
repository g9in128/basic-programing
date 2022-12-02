#include<stdio.h>
#include<math.h>

int main() {
	int inn,cnt=0;
	scanf("%d",&inn);
	int max = ((int) sqrt(inn)) + 1;
	for (int i = 2; i < max;i++) {
		if (inn % i == 0) {
			cnt++;
			if (inn/i != i) cnt++;
		}
	}
	printf("%d\n",cnt);
}
