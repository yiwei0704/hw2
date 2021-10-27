#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	int i, j, k;
	
	printf("(A)\n");
	for (int i = 1; i <= 10; i++) 
	{
		for ( j = 1; j < i + 1; j++)	printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	printf("(b)\n");
	for (int i = 1; i <= 10; i++)
	{
		for (j = 10; j > i - 1; j--)	printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	printf("(c)\n");
	for (int i = 0; i < 10; i++)
	{
		for (j = 0; j < i ; j++)	printf("%s", " ");
		for (k = 10; k > i ; k--)	printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	printf("(d)\n");
	for (int i = 0; i < 10; i++) 
	{
		for (j =10; j > i; j--)		printf("%s", " ");
		for (k = 0; k < i+1; k++)	printf("%s", "*");
		printf("\n");
	}
	return 0;
}