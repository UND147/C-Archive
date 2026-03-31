#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {
	int iNo;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &iNo);

	if (iNo < 0) {
		iNo = -(iNo);
	}

	printf("절대값은 %d입니다.", iNo);
}

// if (iNo < 0 ) {
// } 
// else {}