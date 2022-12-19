#include<stdio.h>

// 하나의 정수를 읽고 일, 시, 분, 초 네 개의 정수로 바꾸어 출력하는 프로그램을 작성하라.  
// 출력 형식은 아래의 예제와 같이 나오도록 해야한다. 

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
		
		printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n"
			,time,day,hour,min,sec);
		scanf("%d",&time);
	}
}
