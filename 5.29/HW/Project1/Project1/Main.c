#include<stdio.h>
#include<stdlib.h>
int main() {
	for (;;) {
		int number1, number2;
		int last, f, d, e = 1;
		int i;
		printf("Enter two integer：(Enter -1 -1)");
		scanf_s("%d %d", &number1, &number2);
		if (number1 == -1 && number2 == -1) {
			exit(0);
		}
		f = number1 * number2;
		if (number1 >= number2) {
			d = number2;
		}
		else {
			d = number1;
		}
		for (i = 2; i <= d; i++) {
			if (number1%i == 0 && number2%i == 0) {
				e = e * i;
				number1 = number1 / i;
				number2 = number2 / i;
				if (number1%i == 0 && number2%i == 0) {
					i = i - 1;
				}
			}
		}
		last = f / e;
		printf("最小公倍數：%d\n", last);
	}
	system("pause");
	return 0;
}