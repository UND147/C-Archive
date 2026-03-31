// 사용자로부터연도(정수)를 입력받아 윤년인지 아닌지 출력
// 연도가 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않은 연도
// 400으로 나누어 떨어지는 연도
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() 
{
	int iYear;
	int iLeafFlag;

	printf("연도를 입력하시오: ");
	scanf("%d", &iYear);

	iLeafFlag = ((iYear % 4 == 0) && (iYear % 100 != 0)) ||
			  (iYear % 400 == 0);

	if ((iLeafFlag) == 1) {
		printf("%d년은 윤년입니다.", iYear);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", iYear);
	
	}

	return 0;
}