#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main0() {
	int iFarenheit;
	double dCelsius;

	printf("화씨온도를 입력하시오: ");
	scanf("%d", &iFarenheit);

	dCelsius = ((double)5 / (double)9) * (double)(iFarenheit - 32);
	printf("섭씨온도는 %lf입니다\n", dCelsius);
}