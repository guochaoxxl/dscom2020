#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

//#define DataType int
//
#define Size 10

typedef int DataType;

/*struct _stu{
	int id;
	bool sex;
	char name[Size];
};*/

typedef struct _stu{
	int id;
	bool sex;
	char name[Size];
} Student;

//void outStu(struct _stu stu){
void outStu(Student stu){
	printf("%s info: id-%d sex-%d", stu.name, stu.id, stu.sex);
}

int main(int argc, char **argv)
{
	//struct _stu stu1;
	/*Student stu1;
	stu1.id = 100;
	stu1.sex = 0;
	strcpy(stu1.name, "zhangsan");*/

	Student *ptrStu = (Student *)malloc(sizeof(Student));
	/*(*ptrStu).id = 100;
	(*ptrStu).sex = 0;
	strcpy((*ptrStu).name, "zhangsan");*/
	ptrStu->id = 100;
	ptrStu->sex = 0;
	strcpy(ptrStu->name, "zhangsan");
	DataType var1 = 3;
	printf("%d\n", var1);

	outStu(*ptrStu);

	return 0;
}
