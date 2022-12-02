#include<stdio.h>
#define HOUR_TO_MIN 60

int main() {
	int time;
	scanf("%d",&time);
	while (time > 0) {
		printf("Time in minute(s):%5d =%3d hour(s) and%3d minute(s)\n",time,time/60,time%60);
		scanf("%d",&time);
	}
}
