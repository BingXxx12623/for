//利用for循环来创建一个立方
//效果是一个如同表格的效果
//1-5的立方就足够了,用i来表示循环变量
//在英语中cubed表示立方的意思
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int i;
//	printf("   n      n cubed\n");
//	for (i = 1; i < 6; i++)
//	{
//		printf("   %d      %d\n", i, i*i*i);
//	}
//	system("pause");
//	return 0;
//}
//用for循环来做一个递减计数器
//倒数之后,用we have ignition!!
//此处我不给for 循环划定范围,观察结果
//创建一个i来当做循环变量
#include<stdio.h>
#include<windows.h>
int main()
{
	int i;
	for (i = 1; i < 6; i++)
		printf("%d seconds\n", 6 - i);
	printf("we have igniton!!!\n");
	system("pause");
	return 0;
}
