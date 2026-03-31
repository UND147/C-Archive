 // 225230001 정주호
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main00()
{
	int iNo1, iNo2, iSum;
	
	printf("첫번째 숫자를 입력하시오: ");
	scanf("%d", &iNo1);
	printf("두번째 숫자를 입력하시오: ");
	scanf("%d", &iNo2);

	iSum = iNo1 + iNo2;

	printf("두수의 합: %d", iSum);

	return 0;
}