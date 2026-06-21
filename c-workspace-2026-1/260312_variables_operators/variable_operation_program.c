// 정주호
#include <stdio.h>
int main() 
{
	//변수 선언
	int iNo1 = 30; 
	int iNo2 = 20;
	int iSum, iMin, iMult, iDiv;
	double dDiv2, dDiv3;
	// 연산
	iSum = iNo1 + iNo2;
	iMin = iNo1 - iNo2;
	iMult = iNo1 * iNo2;
	iDiv = iNo1 / iNo2;
	dDiv3 = iNo1 / iNo2;
	dDiv2 = (double)iNo1 / (double)iNo2; 
	//출력 
	printf("두수의 합: %d \n", iSum);
	//printf("두수의 합: %d \n", iNo1 + iNo2); -> 안좋은예>연산식
	printf("두수의 차: %d \n", iMin);
	printf("두수의 곱: %d \n", iMult);
	printf("두수의 몫: %d \n\n", iDiv);
	printf("두수의 몫: %f \n", dDiv3); // 정수와 정수 연산 => 실수형 출력
	printf("두수의 몫: %f\n\n", dDiv2); // 정수 실수로 형변환 후 => 실수형 출력

	printf("%d+%d 의 값: %d \n", iNo1, iNo2, iSum);
	printf("%d-%d 의 값: %d \n", iNo1, iNo2, iMin);
	printf("%d*%d 의 값: %d \n", iNo1, iNo2, iMult);
	printf("%d/%d 의 값: %d \n", iNo1, iNo2, iDiv);
}