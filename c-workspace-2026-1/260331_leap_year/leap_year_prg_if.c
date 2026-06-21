#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() 
{
	int iYear, iMod4, iMod100, iMod400;
	int iLeapFlag;
	printf("연도를 입력하시오: ");
	scanf("%d", &iYear);
	
	/*iMod4 = iYear % 4 == 0;
	iMod100 = (iYear % 100) == 0;
	iMod400 = iYear % 400 == 0;*/
	iLeapFlag = ((iYear % 4 == 0) && (iYear % 100 != 0))
				|| (iYear % 400 == 0);
	
	if (iLeapFlag){
		printf("%d년은 윤년입니다.", iYear);
	} else {
		printf("%d년은 윤년이 아닙니다.", iYear);
	}
	
	/*if ((iMod4 == 1 && iMod100 == 0)||iMod) {
		printf("%d년은 윤년입니다.", iYear);
	}
	else {
		printf("%d년은 윤년이 아닙니다.", iYear);
	}*/

	return 0;
}