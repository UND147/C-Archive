// 초 단위의 정수를 입력받고, 입력받은 값을 시/분/초로 변환하는 프로그램을 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int iNo;
	int iTemp;
	int iSec, iHour, iMin, iDay;

	printf("정수를 입력하세요: ");
	scanf("%d", &iNo);

	/*iHour = iNo / 3600;
	iMin = (iNo - (iHour*3600))/60;
	iSec = iNo % 60;*/

	iSec = iNo % 60;
	iTemp = iNo / 60;
	iHour = iTemp / 60;
	iMin = iTemp - (iHour * 60);
	/*
	iMin = iNo / 60
	iSec = INo % 60
	
	iHour = iMin / 60;
	iMin = iMin - iHour;

	iDay = iHour / 24;
	iHour = iHour - iDay;
	*/
	printf("%d초는 %d시간, %d분, %d초입니다.", iNo, iHour, iMin, iSec);
	// printf("%d초는 %일, %d시간, %d분, %d초입니다.", iNo, iDay, iHour, iMin, iSec);
}