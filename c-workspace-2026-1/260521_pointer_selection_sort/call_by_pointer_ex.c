/*
- 배열 선언(값X)
- Call getArray(크기값 전달포함)
- Call prnArray
*/ 

#define _CRT_SECURE_NO_WARNINGS
#define ARRSIZE 10
#include <stdio.h>

int getArray(int iArr[], int iArrSize);
void prnArray(int iArr[], int iArrSize);

int main() {
	int iArrSize = 10;
	int iArr[10];
	// getArray
	getArray(iArr, iArrSize);
	// prnArray
	prnArray(iArr, iArrSize);
	return 0;
}

int getArray(int iArr[], int iArrSize) {
	printf("정수 %d개 입력 : ", iArrSize);
	for (int i = 0; i < iArrSize; ++i) {
		scanf("%d", &iArr[i]);
	}
	return iArr;
}

void prnArray(int iArr[], int iArrSize) {
	printf("{ ");
	for (int j = 0; j < iArrSize; ++j) {
		printf("%d ", iArr[j]);
	}
	printf("}");
}