// 225230001 정주호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main01()
{
	double dRadius, dArea;
	
	printf("반지름을 입력하시오: ");
	scanf("%lf", &dRadius);

	dArea = dRadius * dRadius * PI;

	printf("원의 면적: %lf", dArea);
	//printf("원의 면적: %.2lf", dArea);

	return 0;
}