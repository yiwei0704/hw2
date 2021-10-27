#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float sales, salary;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &sales);
	if (sales == -1)
	{
		printf("  ");
	}
	else
	{
		salary = 200 + 0.09*sales;
		printf("salary is: %.2f", salary);
	}
	return 0;
}