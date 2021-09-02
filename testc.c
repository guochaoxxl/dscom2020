#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define Size 10

int main(int argc, char **argv)
{
	printf("Hello world!\n");

	for(int i = 0; i < argc; i++){
		printf("%dth: %s\t", i + 1, *(argv + i));
	}
	printf("\n");

	int var1 = 33;
	printf("var1: %d\n", var1);
	printf("&var1: %p\n", &var1);

	int *ptrVar1;
	ptrVar1 = &var1;
	printf("ptrVar1: %p\n", ptrVar1);
	printf("&ptrVar1: %p\n", &ptrVar1);
	printf("*ptrVar1: %d\n", *ptrVar1);

	printf("*ptrVar1: %d\n", ++*ptrVar1);
	printf("var1: %d\n", var1);
	printf("&var1: %p\n", &var1);

	const int var2 = 99;
	printf("var2: %d\n", var2);

	int *ptrVar2 = &var2;
	printf("*ptrVar2: %d\n", ++*ptrVar2);
	printf("var2: %d\n", var2);

/*	struct _stu{
		int id;
		bool sex;
		char name[Size];
	};

	struct _stu stu1;*/

	//typedef	struct _stu{
	typedef	struct {
		int id;
		bool sex;
		char name[Size];
	} Student;

	Student stu1;

	stu1.id = 1001;
	stu1.sex = 0;
//	stu1.name = "zhangsan";
	strcpy(stu1.name, "zhangsan");

	printf("student info: name-%s sex-%d id-%d\n", stu1.name, stu1.sex, stu1.id);

	Student *ptrStu1 = &stu1;
	(*ptrStu1).id = 1002;
	(*ptrStu1).sex = 1;
	strcpy((*ptrStu1).name, "lisi");

	printf("student info: name-%s sex-%d id-%d\n", ptrStu1->name, ptrStu1->sex, ptrStu1->id);

	return 0;
}
