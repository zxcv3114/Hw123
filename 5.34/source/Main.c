#include<stdio.h>
#include<stdlib.h>
int uu(int q,int w);
int main() {
	int a, b, i, ans;
	ans = 1;
	printf("��J����");
	scanf_s("%d", &a);
	printf("��J����");
	scanf_s("%d", &b);
	

	printf("%d",  uu(a,b));


	system("pause");
	return 0;
}
int uu(int q,int w) {
	int ans, i;
	ans = 1;
	for (i = 1; i <= w; i++) {
		ans = ans * q;





	}
	return ans;
}