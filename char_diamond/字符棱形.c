#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char q = { 0 };
	int w = 0;
	int t = 0;
	int n = 0;
	scanf("%c%d", &q, &n);
	//打印上半部分
	for (w = 0; w < n; w++)
	{
		int e = 0;
		int r = 0;
		for (e = 0; e < n - 1 - w; e++)
		{
			printf(" ");
		}
		for (r = 0; r < w * 2 + 1; r++)
		{
			printf("%c", q);
		}
		printf("\n");
	}
	//打印下半部分
	for (t = 0; t < n - 1; t++)
	{
		int e = 0;
		int r = 0;
		for (e = 0; e < t + 1; e++)
		{
			printf(" ");
		}
		for (r = 0; r < (n + (n - 3)) - (t * 2); r++)
		{
			printf("%c", q);
		}
		printf("\n");
	}
	return 0;
}