#include "calg.h"


int add(int var1, int var2){
	return var1 + var2;
}

int sub(int var1, int var2){
	return var1 - var2;
}

int mul(int var1, int var2){
	return var1 * var2;
}

int div(int var1, int var2){
	return var1 / var2;
}

int mod(int var1, int var2){
	return var1 % var2;
}

void inputVar(int *var1, int *var2){
	printf("please input var1: ");
	scanf("%d", var1);
	printf("please input var2: ");
	scanf("%d", var2);

	printf("you input *var1 and *var2: %d and %d\n", *var1, *var2);
}
