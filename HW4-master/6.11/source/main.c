#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10] = { 1,9,8,6,2,7,10,4,3,5 };
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] >= a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}

		printf("Step %2d :{", 10 - i);

		for (int i = 0; i < 10; i++)
		{
			printf("%d", a[i]);
			if (i < 9)
			{
				printf(",");
			}
		}
		printf("}\n");
	}
	system("pause");
	return 0;
}