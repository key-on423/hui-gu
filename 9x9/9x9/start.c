#include <stdio.h>

void jiafa();
void jianfa();
void chufa();
void chengfa();
void jiujiu();
int main()
{
	int i;
	puts("������һ�����в���");
	puts("1.���мӷ�����     2.���м�������");
	puts("3.���г˷�����     4.���г�������");
	puts("5.��ʾ�žų˷���");
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
		puts("�������,�޲�������\n");
	}
	puts("����");
	return 0;
}
void jiafa()
{
	puts("���뱻���������");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d+%d=%d\n", x, y, x + y);
}
void jianfa()
{
	puts("���뱻���������");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d-%d=%d\n", x, y, x - y);
}
void chufa()
{
	puts("���뱻���������");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d/%d=%d\n", x, y, x / y);
}
void chengfa()
{
	puts("���뱻���������");
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