#include<stdio.h>

int main(int) {
	printf("int형의 크기\t\t\t : %d\n", sizeof(int));
	printf("unsigned int형의 크기\t\t : %d\n", sizeof(unsigned int));
	printf("short형의 크기\t\t\t : %d\n", sizeof(short));
	printf("unsigned short형의 크기\t : %d\n", sizeof(unsigned short));
	printf("long int형의 크기\t\t : %d\n", sizeof(long int));
	printf("unsigned long int형의 크기\t : %d\n", sizeof(unsigned long int));
	printf("float형의 크기\t\t\t : %d\n", sizeof(float));
	printf("double형의 크기\t\t : %d\n", sizeof(double));
	printf("long double형의 크기\t\t : %d\n", sizeof(long double));
	printf("char형의 크기\t\t\t : %d\n", sizeof(char));
	printf("unsigned char형의 크기\t\t : %d\n", sizeof(unsigned char));
}