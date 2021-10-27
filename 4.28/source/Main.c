#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int level,h=0;
	float salary,bp=0.0,weeksalary=0.0,salespays=0.0,moneyforeachitems=0.0, amount = 0.0;
	printf("Input level: ");
	scanf_s("%d", &level);
	switch (level)
	{
	case 1:
		printf("Input weeksalary: ");
		scanf_s("%f", &weeksalary);
		salary = weeksalary;
		printf("Your salary is %.2f dollars",salary);
		break;
	case 2:
		printf("Input hours: ");
		scanf_s("%d", &h);
		printf("Input basic pays per hours: ");
		scanf_s("%f", &bp);
		if (h <= 40)
		{
			salary = h * bp;
			printf("Your salary is %.2f dollars \n", salary);
		}
		else
		{
			salary = 40 * bp + ((h - 40)*(1.5*bp));
			printf("Your salary is %.2f dollars ", salary);
		}
	break;
	case 3:
		printf("Input salespays: ");
		scanf_s("%f", &salespays);
		salary = 250 + 0.057 * salespays;
		printf("Your salary is %.2f dollars ", salary);
	break;
	case 4:
		printf("Input moneyforeachitems: ");
		scanf_s("%f", &moneyforeachitems);
		printf("Input the amount of items: ");
		scanf_s("%f", &amount);
		salary = moneyforeachitems* amount;
		printf("Your salary is %.2f dollars ", salary);
	}
	return 0;
}