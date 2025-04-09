#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int type, data;
	printf("입력 진수 결정 <1>10 2<16> 3<8>:  ");
	scanf_s("%d", &type);

	printf("값입력:  ");

	if (type == 1) {
		scanf_s("%d", &data);
	}
	if (type == 2) {
		scanf_s("%x", &data);
	}
	if (type == 3) {
		scanf_s("%o", &data);
	}

	printf("10진수:  %d\n", data);
	printf("16진수:  %X\n", data);
	printf("8진수:  %o\n", data);
}