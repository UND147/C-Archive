/*
유효한 암호 확인
- 암호는 7글자 이상
- 하나 이상의 소문자 islower()
- 하나 이상의 대문자
- 하나 이상의 숫자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0

int main() {
	char sPassword[20];
	
	printf("암호입력: ");
	scanf("%s", sPassword);
	printf("%d", sizeof(sPassword)); 
	//사이즈 구하는 함수 작성해보기
	

	int bPwCheck = FALSE;
	int bLowerCheck = 0, bUpperCheck = 0, bDigitCheck = 0;
	// 소문자 체크
	for (int i = 0; i < sizeof(sPassword); ++i) { // null만나면 break 조건 걸고, 아닐때는 islower 해당 count >> count가 1이상이면 ..
		if (islower(sPassword[i]) != FALSE) { 
			bLowerCheck = TRUE;
		}
		if (bLowerCheck == TRUE) {
			break;
		}
	}
	// 대문자 체크
	for (int j = 0; j < sizeof(sPassword); ++j) {
		if (isupper(sPassword[j]) != FALSE) {
			bUpperCheck = TRUE;
			
		}
		if (bUpperCheck == TRUE) {
			break;
		}
	}
	// 하나 이상의 숫자 체크
	for (int iNoCheck = 0; iNoCheck < sizeof(sPassword); ++iNoCheck) {
		if (isdigit(sPassword[iNoCheck]) != FALSE) {
			bDigitCheck = TRUE;
		}
		if (bDigitCheck == TRUE) {
			break;
		}
	}
	if ((bLowerCheck == TRUE) && (bUpperCheck == TRUE) && (bDigitCheck == TRUE)) {
		bPwCheck = TRUE;
	}

	printf("%d\n", bPwCheck);
	

	return 0;
}