#include<stdio.h>
#include<math.h>

// 하나의 정수를 입력받아 
// 그 수의 약수의 수를 출력하는
// 프로그램을 작성하라. (1과 N은 제외) 

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
