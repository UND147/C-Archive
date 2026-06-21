#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define STD_NAME_LEN 16
#define STD_NO 1

struct Student // 구조체 선언
{
	char sNameZ[STD_NAME_LEN];
	int iAge;
	char sDnameZ[STD_NAME_LEN];
	double dScore;
};
void getStudentInfo(struct Student stStudentZ[]);
void printStudentInfo(struct Student stStudentZ[]);
int main(void) {
	
	struct Student stStudentZ[STD_NO];

	// scan 
	getStudentInfo(stStudentZ);
	printStudentInfo(stStudentZ);
	// print
	return 0;
}
void getStudentInfo(struct Student stStudentZ[]){
	for (int stdCnt = 0; stdCnt < STD_NO; ++stdCnt) {
		printf("학생의 이름을 입력:");
		scanf("%s", stStudentZ[stdCnt].sNameZ);
		printf("학생의 나이를 입력:"); // 나이와 성적 변수는 배열이 아님
		scanf("%d", &stStudentZ[stdCnt].iAge);
		printf("학생의 전공을 입력:");
		scanf("%s", stStudentZ[stdCnt].sDnameZ);
		printf("학생의 성적을 입력:");
		scanf("%lf", &stStudentZ[stdCnt].dScore);
	}
}
void printStudentInfo(struct Student stStudentZ[]) {
	int stdNo;
	for (int stdCnt = 0; stdCnt < STD_NO; ++stdCnt) {
		stdNo = stdCnt + 1;
		printf("#%d번째 학생인 %s은 %d살이고 %s 학과이며 성적은 %.2lf이다", 
				stdNo, stStudentZ[stdCnt].sNameZ, stStudentZ[stdCnt].iAge, stStudentZ[stdCnt].sDnameZ, stStudentZ[stdCnt].dScore);
	}
}