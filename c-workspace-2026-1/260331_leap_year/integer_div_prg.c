#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int iNo1, iNo2, iMod;
	int iResult;
	double dResult;

	printf("두 개의 정수를 입력: ");
	scanf("%d %d", &iNo1, &iNo2);

	if (iNo2 == 0) {
		printf("[오류] 분모가 0이다");
	}
	else {
		iMod = iNo1 % iNo2;
		if (iMod == 0) {
			iResult = iNo1 / iNo2;
			printf("%d 나누기 %d의 몫은 %d, 나머지는 %d", iNo1, iNo2, iResult, iMod);
		}
		else {
			dResult = (double)iNo1 / iNo2;
			printf("%d 나누기 %d의 몫은 %.2lf, 나머지는 %d", iNo1, iNo2, dResult, iMod);
		}
	}
	return 0;
}