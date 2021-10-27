#include<stdio.h>
#include<stdlib.h>
int main(void)
 {
	int a, b;
	printf("Input a b : ");
	scanf_s("%d %d", &a, &b);

	for (int i = 0; i < a; i++) {
		if (i == 0 || i == (a - 1)) {
			for (int j = 0; j < b; j++) printf("+");
			printf("\n");
		}
		else {
			for (int j = 0; j < b; j++)
				if (j == 0 || j == (b - 1)) printf("+");
				else printf(" ");
			printf("\n");
		}
	}
	system("pause");
	return 0;

}
