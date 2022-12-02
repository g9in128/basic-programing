#include<stdio.h>

int main() {
	int time,day,hour,min,sec;
	scanf("%d",&time);
	while(time > 0) {
		sec = time;
		day = sec / 86400;
		sec = sec % 86400;
		
		hour = sec / 3600;
		sec = sec % 3600;
		
		min = sec/ 60;
		sec = sec % 60;
		
		printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n",time,day,hour,min,sec);
		scanf("%d",&time);
	}
}
