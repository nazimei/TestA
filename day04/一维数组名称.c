#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void printArr(int arr[], int len)
{
	for (int i=  0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}


void test01()
{
	int arr[5] = { 1,2,3,4,5 };
	/*int arr2[5] = {0};
	arr2 = arr;
	printf("%d\n", arr2[4]);*/
	//error  ���ܸ����鸳ֵ����Ϊ��������Ϊ�ڴ����׵�ַ��
	//�ı��ᵼ�����鲻��ָ���ڴ���е����ݣ����ݶ�ʧ��������ᵼ���ڴ治�ܶ�

	//һά����������ָ�룬�����������Ϊ��һ��ָ�볣��
	//�����������������	int arr[5] = { 1,2,3,4,5 };


	//1����������������ռ�ֽ� sizeof
	printf("%d\n", sizeof(arr));//��ʱ��������Ϊһ��ָ��

	//2���������� ȡ��ַ ��ʱ����ֵΪָ�������ָ��
	//��ָ����Ԫ�ص�ָ���������ڲ�����һ�����������飬һ����һ��Ԫ��
	printf("%d\n", &arr);
	printf("%d\n", &arr[0]);
	printf("%d\n", arr); //����ĵ�ַ������Ԫ�صĵ�ַ

	int len = sizeof(arr) / sizeof(arr[0]);
	printArr(arr, len);

	int * p = arr;
	p = p + 1;
	printf("%d\n", p[0]);
	printf("%d\n", p[-1]);//��*(p-1),˵��[]���ܷŸ���
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
