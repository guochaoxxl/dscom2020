#include <stdio.h>
#include "calg.h"

typedef int (*ptrFunc)(int, int);

int main(int argc, char **argv)
{
	int var1;
	int var2;

	inputVar(&var1, &var2);
	//int sel;
	//printf("please input sel: ");
	//scanf("%d", &sel);
	int tmp = getchar();
	int result;
	char selCal;
	printf("please input selCal: ");
	scanf("%c", &selCal);

	ptrFunc cal;

	switch(selCal){
		//case 1:	
		case '+':	
			cal = add;
			//result = add(var1, var2);
			//result = cal(var1, var2);
			//selCal = '+';
			break;
		//case 2:
		case '-':	
			cal = sub;
			//result = sub(var1, var2);
			//result = cal(var1, var2);
			//selCal = '-';
			break;
		//case 3:
		case '*':	
			cal = mul;
			//result = mul(var1, var2);
			//result = cal(var1, var2);
			//selCal = '*';
			break;
		//case 4:
		case '/':	
			cal = div;
			//result = div(var1, var2);
			//result = cal(var1, var2);
			//selCal = '/';
			break;
		//case 5:
		case '%':	
			cal = mod;
			//result = mod(var1, var2);
			//result = cal(var1, var2);
			//selCal = '%';
			break;

	}
	printf("%d %c %d = %d\n", var1, selCal, var2, result = cal(var1, var2));

	return 0;
}
