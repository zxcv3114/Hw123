#include <stdio.h>

int main()
{
	int n1, n2, minMultiple;
	printf("?�J??����?: ");
	scanf("%d %d", &n1, &n2);

	// �P????�j���ȡA�}?��? minMultiple
	minMultiple = (n1 > n2) ? n1 : n2;

	// ?��? true
	while (1)
	{
		if (minMultiple%n1 == 0 && minMultiple%n2 == 0)
		{
			printf("%d �M %d ���̤p����?? %d", n1, n2, minMultiple);
			break;
		}
		++minMultiple;
	}
	return 0;
}