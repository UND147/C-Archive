// 연도가 4로 나누어 떨어진다
// 100으로 나누어 떨어지는 연도는 제외한다
// 400으로 나누어 떨어지는 연도는 윤년이다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main00() 
{
	int iYear, iFlag;

	printf("연도를 입력: ");
	scanf("%d", &iYear);

	iFlag = ((iYear % 4 == 0) && (iYear % 100 != 0)) || (iYear % 400 == 0);
	
	if (iFlag = 1) {
		printf("1");
	}
	else {
		printf("0");
	}
}