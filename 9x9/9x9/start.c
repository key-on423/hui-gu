#include <stdio.h>

void jiafa();
void jianfa();
void chufa();
void chengfa();
void jiujiu();
int main()
{
	int i;
	puts("请输入一项下列操作");
	puts("1.进行加法运算     2.进行减法运算");
	puts("3.进行乘法运算     4.进行除法运算");
	puts("5.显示九九乘法表");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		jiafa();
		break;
	case 2:
		jianfa();
		break;
	case 3:
		chengfa();
		break;
	case 4:
		chufa();
		break;
	case 5:
		jiujiu();
		break;
	default:
		puts("输入错误,无操作进行\n");
	}
	puts("结束");
	return 0;
}
void jiafa()
{
	puts("输入被加数与加数");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d+%d=%d\n", x, y, x + y);
}
void jianfa()
{
	puts("输入被减数与减数");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d-%d=%d\n", x, y, x - y);
}
void chufa()
{
	puts("输入被除数与除数");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d/%d=%d\n", x, y, x / y);
}
void chengfa()
{
	puts("输入被乘数与乘数");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d*%d=%d\n", x, y, x * y);
}
void jiujiu()
{
	int x, y;
	for (x = 1;x <= 9;x++)
	{
		for (y = 1;y <= x;y++)
		{
			printf("%d*%d=%d ", y, x, x * y);
		}
		printf("\n");
	}
}