#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int account;
	float balance, charges, credits, limit;

	printf("Enter account number(-1 to end):");
	scanf_s("%d", &account);

	if (account != -1) {
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credit:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);


		printf("Account:%d\n", account);
		printf("Credit limit:%.2f\n", limit);
		printf("Balance:%.2f\n", balance - credits + charges);

		if (balance - credits + charges > limit) 
		printf("Credit Limit Exceeded\n");
	}

	system("pause");
	return 0;
	
}