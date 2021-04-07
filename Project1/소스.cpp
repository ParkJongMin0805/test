/*

int main()
{
	int a,b,c;
	printf("삼각형의 세 직선의 길이를 정수로 입력하시오 :");
	scanf("%d%d%d",&a,&b,&c);
	if (a > b + c)
		printf("삼각형이 아닙니다.\n");
	else
	{
		if (b > a + c)
			printf("삼각형이 아닙니다.\n");
		else
		{
			if (c > b + c)
				printf("삼각형이 아닙니다.\n");
			else
				printf("삼각형입니다.\n");
		}
	}
	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b,c;
	c = 0;
	scanf("%d", &a);
	for (a; a >= 1; a--)
	{
		scanf("%d", &b);
		if (c<b)
		{
			c = b;
		}
	}
	printf("%d", c);
	return 0;
}