//����forѭ��������һ������
//Ч����һ����ͬ����Ч��
//1-5���������㹻��,��i����ʾѭ������
//��Ӣ����cubed��ʾ��������˼
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
//��forѭ������һ���ݼ�������
//����֮��,��we have ignition!!
//�˴��Ҳ���for ѭ��������Χ,�۲���
//����һ��i������ѭ������
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
