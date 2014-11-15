#include <stdio.h>

int main(void)
{
	int pa[10], razao;
	int *ptr;

	printf("Insira o termo inicial da PA: ");
	scanf("%d", &pa[0]);
	ptr = pa;

	printf("Insira a razão da PA: ");
	scanf("%d", &razao);

	while( ptr != &pa[9])
	{
		*(ptr+1) = *ptr + razao;
		ptr++;
	}

	for(ptr = pa;  ptr <= &pa[9]; ptr++)
		printf("-> %d",  *ptr);

	printf("\n");
	return 0;
}