#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j, k;
	printf("side1\tside2\thy\t\n");
	for(i=1;i<501;i++)
	{
		for (j = 1; j < 501; j++)
		{
			for (k = 1; k < 501; k++)
			{
				if (i*i + j * j == k * k)
					printf("%d\t%d\t%d\t\n", i, j, k);
			}
		}
	}
	return 0;
}