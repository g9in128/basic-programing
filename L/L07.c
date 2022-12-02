#include<stdio.h>

void move(char dirction, int* x,int* y,int amount) {
	switch(dirction) {
	case 'E':
		*x += amount;
		break;
	case 'W':
		*x -= amount;
		break;
	case 'N':
		*y += amount;
		break;
	case 'S':
		*y -= amount;
		break;
	}
}

int main() {
	int size,x=0,y=0,n,amount;
	char dir;
	scanf("%d %d",&size,&n);
	for (int i = 0; i < n;i++) {
		scanf(" %c %d",&dir,&amount);
		move(dir,&x,&y,amount);
		if (x < 0 || y < 0 || x > size || y > size) {
			printf("-1");
			return 0;
		}
	}
	printf("%d %d",x,y);
}
