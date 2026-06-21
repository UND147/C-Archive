#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int iNo;
	int iFlag;

	printf("정수를 입력하시오: ");
	scanf("%d", &iNo);

	iFlag = iNo % 2;

	if (iFlag == 0) 
	{
		printf("입력된 정수는 짝수입니다.\n");
	}
	else 
	{
		printf("입력된 정수는 홀수입니다.\n");
	}
}
