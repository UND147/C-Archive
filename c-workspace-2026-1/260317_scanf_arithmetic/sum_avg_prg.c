// 사용자로부터 세 개의 double형의 실수를 입력받은 후, 
// 합계와 평균값을 계산하여 화면에 출력하는 프로그램을 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double dNo1, dNo2, dNo3;
	double dSum, dAvg;

	printf("3개의 실수를 입력하시오: ");
	scanf("%lf %lf %lf", &dNo1, &dNo2, &dNo3);

	dSum = dNo1 + dNo2 + dNo3;
	dAvg = dSum / 3;
	
	printf("합계=%.2lf\n", dSum);
	printf("평균=%.2lf", dAvg);

	return 0;
}