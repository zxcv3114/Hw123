#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	unsigned long long int k[42];
	int a;
	k[1] = 0;
	k[2] = 1;
	printf("Enter the Fibonacci number ¡G(1~42)");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++) {
		if (i == 1)
		{
			printf("0,");
		}
		else if (i == 2)
		{
			printf("1,");
		}
		else
		{
			k[i] = k[i - 2] + k[i - 1];
			printf("%llu,", k[i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}