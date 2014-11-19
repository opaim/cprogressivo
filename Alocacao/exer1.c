#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void callocc(int* ptr, int size){
	ptr = (int *) malloc(size*sizeof(int));
	memset(ptr, 0, sizeof(ptr));
}

int main(void){
	int count;
	int *ptr;

	ptr=(int *) calloc(5, sizeof(int));

	for(count=0; count < 5; count++)
		printf("%d\n", ptr[count]);

	return 0;	
}