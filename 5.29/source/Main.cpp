#include <stdio.h>

int main()
{
	int n1, n2, minMultiple;
	printf("?入??正整?: ");
	scanf("%d %d", &n1, &n2);

	// 判????大的值，并?值? minMultiple
	minMultiple = (n1 > n2) ? n1 : n2;

	// ?件? true
	while (1)
	{
		if (minMultiple%n1 == 0 && minMultiple%n2 == 0)
		{
			printf("%d 和 %d 的最小公倍?? %d", n1, n2, minMultiple);
			break;
		}
		++minMultiple;
	}
	return 0;
}