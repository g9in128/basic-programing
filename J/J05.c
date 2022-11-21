#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long USlong;

int main() {
	int n,m,idxd,idxp;
	USlong day=0,product=0;
	scanf("%d %d",&n,&m);
	USlong* sump = (USlong*) malloc(sizeof(USlong)*n),
		* sumd = (USlong*) malloc(sizeof(USlong)*m);
	for (int i = 0;i<m;i++) {
		sumd[i] = 0;
	}
	for (int i = 0; i < n;i++) {
		sump[i] = 0;
	}
	for (int i = 0;i<n;i++) {
		for (int j = 0;j<m;j++) {
			int data;
			scanf("%d",&data);
			sumd[j] += data;
			sump[i] += data;	
		}
	}
	for (int i =0;i<m;i++) {
		if (sumd[i] >= day) {
			day = sumd[i];
			idxd = i;
		}
	}
	for (int i =0;i<n;i++) {
		if (sump[i] >= product) {
			product = sump[i];
			idxp = i;
		}
	}
	printf("%d %lld\n%d %lld",idxp+1,product,idxd+1,day);
}
