#include<stdio.h>
#include<stdlib.h>
int main(void) 
{
	int days;
	float loan,rate,charge;
	printf("Enter loan principal(-1 to end): ");
	scanf_s("%f", &loan);
	if (loan == -1)
	{
		printf("  ");
	}
	else
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);
		charge = loan * rate*days / 365;
		printf("salary is: %.2f", charge);
	}
	return 0;
}