#include <stdio.h>

typedef struct {
	char ch1;
	char ch2;
	int var1;
} Type1;

typedef struct {
	char ch1;
	int var1;
	char ch2;
} Type2;


typedef struct {
	char ch1;
	char ch2;
	char ch3;
	int var1;
} Type3;

typedef struct {
	char ch1;
	char ch2;
	char ch3;
	char ch4;
	int var1;
} Type4;


int main(int argc, char **argv)
{
	printf("Type1 size: %d\n", sizeof(Type1));
	printf("Type2 size: %d\n", sizeof(Type2));
	printf("Type3 size: %d\n", sizeof(Type3));
	printf("Type4 size: %d\n", sizeof(Type4));

	printf("int size: %d\n", sizeof(int));
	printf("char size: %d\n", sizeof(char));

	Type1 *ptrType1 = (Type1 *)malloc(sizeof(Type1));
	printf("ptrTyp1 size: %d\n", sizeof(ptrType1));
	printf("Typ1 size: %d\n", sizeof(Type1));
	(*ptrType1).ch1 = 'a';
	(*ptrType1).ch2 = 'b';
	(*ptrType1).var1 = 97;

	printf("info: ch1: %c ch2: %c var1: %d\n", (*ptrType1).ch1, (*ptrType1).ch2, (*ptrType1).var1 );

	Type2 *ptrType2 = (Type2 *)malloc(sizeof(Type2));
	printf("ptrTyp2 size: %d\n", sizeof(ptrType2));
	printf("Typ2 size: %d\n", sizeof(Type2));
	ptrType2->ch1 = 'b';
	ptrType2->ch2 = 'a';
	ptrType2->var1 = 99;

	printf("info: ch1: %c ch2: %c var1: %d\n", (*ptrType2).ch1, (*ptrType2).ch2, (*ptrType2).var1 );



	return 0;
}
