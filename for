//반복 알고리즘 예제

#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	printf("1부터 n까지의 합을 구합니다.\n");
	printf("n값 : ");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("%d\n", i);
	}
}
