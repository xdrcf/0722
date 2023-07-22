#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num1, num2, i;

	printf("두 개의 정수:");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2) {
		for (num2; num2 <= num1; num2++)
		{
			for (i = 1; i <= 9; i++)
			{
				printf("%dx%d=%d\n", num2, i, num2 * i);
			}
		}}
	else
	{
		for (num1; num1 <= num2; num1++)
		{
			for (i = 1; i <= 9; i++) 
			{
				printf("%dx%d=%d\n", num1, i, num1 * i);
			}
		}
	}
	return 0;
}