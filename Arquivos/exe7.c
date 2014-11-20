#include <stdio.h>

int main(void){
	char url[]="dados.txt",
		info[50];
	FILE *arq;

	arq = fopen(url, "r");
	if (arq == NULL)
		printf("Não foi possível abrir o arquivo.\n");
	else
		while((fgets(info, sizeof(info), arq)) != NULL)
			printf("%s", info);
	printf("\n");
	fclose(arq);

	return 0;
}