/*

int main()
{
	int a,b,c;
	printf("�ﰢ���� �� ������ ���̸� ������ �Է��Ͻÿ� :");
	scanf("%d%d%d",&a,&b,&c);
	if (a > b + c)
		printf("�ﰢ���� �ƴմϴ�.\n");
	else
	{
		if (b > a + c)
			printf("�ﰢ���� �ƴմϴ�.\n");
		else
		{
			if (c > b + c)
				printf("�ﰢ���� �ƴմϴ�.\n");
			else
				printf("�ﰢ���Դϴ�.\n");
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