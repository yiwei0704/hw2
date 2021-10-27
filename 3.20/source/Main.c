#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int works;
	float  rate,salary;
	printf("Enter # of hours worked(-1 to end): ");
	scanf_s("%d", &works);
	if (works == -1)
	   {
		printf("  ");
	   }
	   else if(works<=40)
	       {
		    printf("Enter hourly rate of the worker: ");
		    scanf_s("%f", &rate);
		    salary = works * rate;
		    printf("salary is: %.2f", salary);
	       }
		  else 
	         {
		      printf("Enter hourly rate of the worker: ");
		      scanf_s("%f", &rate);
		      salary = 40 * rate + ((works - 40) * (1.5 * rate));
		      printf("salary is: %.2f", salary);
	         }
	return 0;
}