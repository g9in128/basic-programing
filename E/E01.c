#include<stdio.h>
#define HOUR_TO_MIN 60
// n분으로 주어지는 시간을 시간과 분으로 바꿔주는 프로그램을 작성하라. 

int main() {
	int time;
	scanf("%d",&time);
	while (time > 0) {
		printf("Time in minute(s):%5d =%3d hour(s) and%3d minute(s)\n",time,time/60,time%60);
		scanf("%d",&time);
	}
}
