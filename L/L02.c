#include<stdio.h>

int make1(int data,int cnt) {
	if (data == 1) return cnt;
	if (data % 2 == 0) {
		return make1(data / 2, cnt + 1);
	}else {
		return make1(3 * data + 1,cnt + 1);
	}
}

int main() {
	int n;
	scanf("%d",&n);
	printf("%d",make1(n,-1));
}
