#include <stdio.h>

int main()
{
	char curso[14] = {'C', ' ', 'P', 'r', 'o', 'g','r', 'e', 's', 's', 'i', 'v', 'o', '\n'};

	int indice;

	for(indice=0; curso[indice] != '\n'; indice++){
		printf("%c", curso[indice]);
	}

	printf("\n");
}