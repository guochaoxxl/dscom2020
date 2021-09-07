#include <stdio.h>

//int main(int argc, char **argv)
int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++){
		printf("%dth O: %s\n", i+1, *(argv + i));
	}

	int iArry[] = {1, 4, 5, 8, 3, 2};
	int size = sizeof(iArry)/sizeof(int);
	for(int i = 0; i < size; i++){
		//printf("%d\t", iArry[i]);	
		printf("%d\t", i[iArry]);	
	}
	printf("\n");

	int *ptrArry = iArry;
	for(int i = 0; i < size; i++){
		//printf("%d\t", *(ptrArry + i));	
		printf("%d\t", *(i + ptrArry));	
	}
	printf("\n");

	return 10;
}
