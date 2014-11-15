#include <stdio.h>

int strlen(char *str){
	int count=0;

	while(str[count] != '\0')
		count++;

	return count;
}

void *strcpy(char *dest, char *orig)
{
	int count;

	for(count=0; count < strlen(orig); count++)
		dest[count] = orig[count];

	dest[count]='\0';
}

char *memcpy(char *dest, char *orig, int n){
	int i;
	
	for(i=0; i < n; i++)
		dest[i] = orig[i];
	
	return dest;
}

int memcmp(char *str1, char *str2, int n){
	int i;

	for(i=0; i<n; i++)
	{
		if(str1[i] < str2[i])
			return -1;
		else
			 if(str1[i] > str2[i])
				return 1;
	}

	return 0;
}

int main(void)
{
	char str[]="C Progressivo 123";
	char str1[]="C Progressivo 123";
	char str2[]="";

	printf("Tamanho de str: %d\n", strlen(str));
	printf("Original: %s\n", str);
	strcpy(str1, str);
	printf("Copia: %s\n", str1);
	printf("Tamanho de str1: %d\n", strlen(str1));
	printf("copia n: %s\n", memcpy(str2, str1, 10));
	printf("Iguais str e str1: %d\n", memcmp(str, str1, 17));
	
}